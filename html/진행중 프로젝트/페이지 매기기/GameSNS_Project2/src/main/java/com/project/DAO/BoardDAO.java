package com.project.DAO;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import com.project.DTO.BoardDTO;

public class BoardDAO {
	private Connection conn= null;
	private Statement st = null;
	private ResultSet rs = null;
	private PreparedStatement ps = null;

    private DataSource ds;

    public BoardDAO() {
        try {
            // JNDI에서 DataSource를 찾아옴
            Context ctx = new InitialContext();
            ds = (DataSource) ctx.lookup("java:comp/env/jdbc/mysql");
        } catch (Exception e) {
            System.out.println("DataSource 설정 에러");
            e.printStackTrace();
        }
    }

    // getMaxNum, insertData, getDataCount, getLists 등의 메서드는 이전과 동일하게 사용 가능

    public Connection getConnection() {
        Connection conn = null;
        try {
            // DataSource에서 Connection을 얻어옴
            conn = ds.getConnection();
        } catch (Exception e) {
            System.out.println("Connection 얻기 에러");
            e.printStackTrace();
        }
        return conn;
    }

    public int getMaxNum() {
        int maxNum = 0;

        PreparedStatement pstmt = null;
        ResultSet rs = null;
        String sql;

        try {
            sql = "SELECT COALESCE(MAX(board_no), 0) FROM board";
            pstmt = conn.prepareStatement(sql);
            rs = pstmt.executeQuery();

            if (rs.next()) {
                maxNum = rs.getInt(1);
            }

        } catch (Exception e) {
            System.out.println(e.toString());
        } finally {
            // close rs and pstmt
        }

        return maxNum;
    }

    public int insertData(BoardDTO dto) {
        int result = 0;

        PreparedStatement pstmt = null;
        String sql;

        try {
            sql = "INSERT INTO board (board_no, name, subject, content, visit_cnt, post_uploadtime) ";
            sql += "VALUES (?, ?, ?, ?, 0, ?)";

            pstmt = conn.prepareStatement(sql);

            pstmt.setInt(1, dto.getBoard_no());
            pstmt.setString(2, dto.getName());
            pstmt.setString(3, dto.getSubject());
            pstmt.setString(4, dto.getContent());
            pstmt.setString(5, dto.getPost_uploadtime());

            result = pstmt.executeUpdate();

        } catch (Exception e) {
            System.out.println(e.toString());
        } finally {
            // close pstmt
        }

        return result;
    }

    public int getDataCount(String searchKey, String searchValue) {
        int totalCount = 0;

        PreparedStatement pstmt = null;
        ResultSet rs = null;
        String sql;

        try {
            searchValue = "%" + searchValue + "%";
            sql = "SELECT COALESCE(COUNT(*), 0) FROM board WHERE " + searchKey + " LIKE ?";
            pstmt = conn.prepareStatement(sql);
            pstmt.setString(1, searchValue);
            rs = pstmt.executeQuery();

            if (rs.next()) {
                totalCount = rs.getInt(1);
            }

        } catch (Exception e) {
            System.out.println(e.toString());
        } finally {
            // close rs and pstmt
        }

        return totalCount;
    }

    public List<BoardDTO> getLists(int start, int end, String searchKey, String searchValue) {
        List<BoardDTO> lists = new ArrayList<>();
        PreparedStatement pstmt = null;
        ResultSet rs = null;
        String sql;

        try {
            searchValue = "%" + searchValue + "%";
            sql = "SELECT * FROM (";
            sql += "    SELECT ROWNUM rnum, data.* FROM (";
            sql += "        SELECT board_no, name, subject, visit_cnt, TO_CHAR(post_uploadtime, 'YYYY-MM-DD') post_uploadtime ";
            sql += "        FROM board WHERE " + searchKey + " LIKE ? ";
            sql += "        ORDER BY board_no DESC) data) ";
            sql += "WHERE rnum >= ? AND rnum <= ?";

            pstmt = conn.prepareStatement(sql);
            pstmt.setString(1, searchValue);
            pstmt.setInt(2, start);
            pstmt.setInt(3, end);
            rs = pstmt.executeQuery();

            while (rs.next()) {
                BoardDTO dto = new BoardDTO();
                dto.setBoard_no(rs.getInt("board_no"));
                dto.setName(rs.getString("name"));
                dto.setSubject(rs.getString("subject"));
                dto.setVisit_cnt(rs.getInt("visit_cnt"));
                dto.setPost_uploadtime(rs.getString("post_uploadtime"));
                lists.add(dto);
            }

        } catch (Exception e) {
            System.out.println(e.toString());
        } finally {
            // close rs and pstmt
        }

        return lists;
    }

    public BoardDTO getReadData(int board_no) {
        BoardDTO dto = null;
        PreparedStatement pstmt = null;
        ResultSet rs = null;
        String sql;

        try {
            sql = "SELECT board_no, name, subject, content, visit_cnt, TO_CHAR(post_uploadtime, 'YYYY-MM-DD HH24:MI:SS') post_uploadtime ";
            sql += "FROM board WHERE board_no = ?";
            pstmt = conn.prepareStatement(sql);
            pstmt.setInt(1, board_no);
            rs = pstmt.executeQuery();

            if (rs.next()) {
                dto = new BoardDTO();
                dto.setBoard_no(rs.getInt("board_no"));
                dto.setName(rs.getString("name"));
                dto.setSubject(rs.getString("subject"));
                dto.setContent(rs.getString("content"));
                dto.setVisit_cnt(rs.getInt("visit_cnt"));
                dto.setPost_uploadtime(rs.getString("post_uploadtime"));
            }

        } catch (Exception e) {
            System.out.println(e.toString());
        } finally {
            // close rs and pstmt
        }

        return dto;
    }

    public int updateHitCount(int board_no) {
        int result = 0;
        PreparedStatement pstmt = null;
        String sql;

        try {
            sql = "UPDATE board SET visit_cnt = visit_cnt + 1 WHERE board_no = ?";
            pstmt = conn.prepareStatement(sql);
            pstmt.setInt(1, board_no);
            result = pstmt.executeUpdate();

        } catch (Exception e) {
            System.out.println(e.toString());
        } finally {
            // close pstmt
        }

        return result;
    }

    public int updateData(BoardDTO dto) {
        int result = 0;
        PreparedStatement pstmt = null;
        String sql;

        try {
            sql = "UPDATE board SET name=?, subject=?, content=? WHERE board_no=?";
            pstmt = conn.prepareStatement(sql);
            pstmt.setString(1, dto.getName());
            pstmt.setString(2, dto.getSubject());
            pstmt.setString(3, dto.getContent());
            pstmt.setInt(4, dto.getBoard_no());
            result = pstmt.executeUpdate();

        } catch (Exception e) {
            System.out.println(e.toString());
        } finally {
            // close pstmt
        }

        return result;
    }

    public int deleteData(int board_no) {
        int result = 0;
        PreparedStatement pstmt = null;
        String sql;

        try {
            sql = "DELETE FROM board WHERE board_no=?";
            pstmt = conn.prepareStatement(sql);
            pstmt.setInt(1, board_no);
            result = pstmt.executeUpdate();

        } catch (Exception e) {
            System.out.println(e.toString());
        } finally {
            // close pstmt
        }

        return result;
    }
}
