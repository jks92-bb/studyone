package com.project.DAO;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import com.project.Command.pagination;
import com.project.DTO.PostDTO;

public class PostDAO {
    private Connection conn = null;
    private ResultSet rs = null;
    private PreparedStatement ps = null;
    private DataSource ds = null;

    public PostDAO() {
        try {
            // JDBC 드라이버 로드
            Context ctx = new InitialContext();
            ds = (DataSource) ctx.lookup("java:comp/env/jdbc/mysql");
        } catch (Exception e) {
            System.out.println("PostDAO 생성자 에러");
            e.printStackTrace();
        }
    }
    
 // 게시판 검색
 	public List<PostDTO> searchPosts(String keyword) {
 		List<PostDTO> result = new ArrayList<>();
 		conn = null;
 		ps = null;
 		rs = null;

 		try {
 			// connection 객체 생성
 			conn = ds.getConnection();

 			// 게시글에서 제목 또는 내용에 키워드가 포함된 것을 검색하며, 결과를 IDX 기준으로 내림차순으로 정렬
 			String query = "SELECT * FROM board WHERE tag LIKE ? OR content LIKE ? ORDER BY IDX DESC";
 			ps = conn.prepareStatement(query);
 			ps.setString(1, "%" + keyword + "%");
 			ps.setString(2, "%" + keyword + "%");
 			rs = ps.executeQuery();
 			while (rs.next()) {
 				// 결과를 PostDTO 객체로 매핑하여 리스트에 추가
 				PostDTO post = new PostDTO();

 				post.setIDX(rs.getInt("IDX"));
 				post.setTag(rs.getString("tag"));
 				post.setTitle(rs.getString("title"));
 				post.setId(rs.getString("id"));
 				post.setContent(rs.getString("content"));
 				post.setDate(rs.getString("date"));

 				result.add(post);
 			}
 		} catch (Exception e) {
 			System.out.println("게시판 검색 실패");
 			e.printStackTrace();
 		} finally {
 			try {
 				if (rs != null)
 					rs.close();
 				if (ps != null)
 					ps.close();
 				if (conn != null)
 					conn.close();
 				System.out.println("POSTDAO finally 통과");
 			} catch (Exception e2) {
 				System.out.println("객체 닫기 실패");
 				e2.printStackTrace();
 			}
 		}
 		System.out.println("좋았어postDAO 반환 전");
 		System.out.println(result);
 		return result;
 	}
    
    
    public List<PostDTO> getPostsByPage(String keyword, int offset, int limit) {
        List<PostDTO> result = new ArrayList<>();
        conn = null;
        ps = null;
        rs = null;

        try {
            conn = ds.getConnection();

            // 페이지에 해당하는 글 목록을 가져오는 쿼리
            String query = "SELECT * FROM board WHERE tag LIKE ? OR content LIKE ? ORDER BY IDX DESC LIMIT ? OFFSET ?";
            ps = conn.prepareStatement(query);
            ps.setString(1, "%" + keyword + "%");
            ps.setString(2, "%" + keyword + "%");
            ps.setInt(3, limit);
            ps.setInt(4, offset);

            rs = ps.executeQuery();

            int index = offset + 1;

            while (rs.next()) {
                PostDTO post = new PostDTO();
                post.setIDX(index++);
                post.setTag(rs.getString("tag"));
                post.setTitle(rs.getString("title"));
                post.setId(rs.getString("id"));
                post.setContent(rs.getString("content"));
                post.setDate(rs.getString("date"));

                result.add(post);
            }
        } catch (Exception e) {
            System.out.println("페이지네이션 실패");
            e.printStackTrace();
        } finally {
            // 리소스 닫기 (생략)
        }

        return result;
    }

    //keyword 기반 토탈.?
    public int getTotalItemCount(String keyword) {
        int totalItemCount = 0;
        Connection conn = null;
        PreparedStatement ps = null;
        ResultSet rs = null;

        try {
            conn = ds.getConnection();

            // 키워드를 기반으로 전체 아이템 수를 계산
            String query = "SELECT COUNT(*) FROM board WHERE tag LIKE ? OR content LIKE ?";
            ps = conn.prepareStatement(query);
            ps.setString(1, "%" + keyword + "%");
            ps.setString(2, "%" + keyword + "%");
            rs = ps.executeQuery();

            if (rs.next()) {
                totalItemCount = rs.getInt(1);
            }
        } catch (Exception e) {
            System.out.println("총 아이템 수를 가져오는 중 오류 발생");
            e.printStackTrace();
        } finally {
            // 리소스 닫기 (생략)
        }

        return totalItemCount;
    }
}
