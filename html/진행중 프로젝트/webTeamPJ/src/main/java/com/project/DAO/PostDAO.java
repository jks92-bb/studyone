package com.project.DAO;

import java.io.PrintWriter;
import java.sql.*;
import java.util.*;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import javax.sql.*;

import com.project.DTO.PostDTO;

public class PostDAO {
	private Connection conn = null;
	private PreparedStatement ps = null;
	private ResultSet rs = null;
	private DataSource ds = null;
	private Statement st = null;

	public PostDAO() {
		try {
			// JNDI를 사용하여 데이터 소스 설정
			Context ctx = new InitialContext();
			ds = (DataSource) ctx.lookup("java:comp/env/jdbc/mysql");
		} catch (Exception e) {
			System.out.println("PostDAO 생성자 에러");
			e.printStackTrace();
		}
	}

	// 게시물 작성
	public void PostInsert(String tag, String ID, String TITLE, String CONTENT, String FILE, HttpServletRequest request,
			HttpServletResponse response) {
		try {
			// 비어 있는 항목을 기록할 변수 초기화
			List<String> emptyFields = new ArrayList<>();

			// 각 항목이 비어있는지 체크
			if (tag == null || tag.trim().isEmpty()) {
				emptyFields.add("태그");
			}
			if (TITLE == null || TITLE.trim().isEmpty()) {
				emptyFields.add("제목");
			}
			if (CONTENT == null || CONTENT.trim().isEmpty()) {
				emptyFields.add("내용");
			}

			// 어떤 항목이 비어 있으면 실패 페이지로 리다이렉트 및 JavaScript 경고창
			if (!emptyFields.isEmpty()) {
				String errorMessage = String.join(", ", emptyFields) + " (을)를 작성 하지 않았습니다.";

				// JavaScript 코드를 클라이언트에게 전달하기 위한 스크립트 작성
				String jsScript = "alert('" + errorMessage + "'); location.href = 'login.html';";

				// JavaScript 코드를 응답에 포함하여 클라이언트에게 전송
				response.setContentType("text/html;charset=UTF-8");
				PrintWriter out = response.getWriter();
				out.println("<script>" + jsScript + "</script>");
				out.close();
			}
			// DB 연결
			conn = ds.getConnection();

			// INSERT 쿼리 수행
			String query = "INSERT INTO board (tag, ID, TITLE, CONTENT, DATE, FILE, isgood) VALUES (?, ?, ?, ?, now(), ?, 0)";
			ps = conn.prepareStatement(query);
			ps.setString(1, tag);
			ps.setString(2, ID);
			ps.setString(3, TITLE);
			ps.setString(4, CONTENT);
			ps.setString(5, FILE);

			try {
				ps.executeUpdate();
				System.out.println("게시물 작성 완료.");
				System.out.println("태그 : " + tag);
				System.out.println("작성자 아이디 : " + ID);
				System.out.println("글 제목 : " + TITLE);
				System.out.println("글 내용 : " + CONTENT);
				response.sendRedirect("successPosting.jsp");
			} catch (Exception e) {
				System.out.println("게시물 작성 실패 (catch).");
				String errorMessage2 = "로그인 후 작성해주세요.";
				String jsScript2 = "alert('" + errorMessage2 + "'); location.href = 'login.html';";
				response.setContentType("text/html;charset=UTF-8");
				PrintWriter out2 = response.getWriter();
				out2.println("<script>" + jsScript2 + "</script>");
				out2.close();
				// response.sendRedirect("login.html");
			}
		} catch (Exception e) {
			System.out.println("Insert 쿼리 수행 실패");
			e.printStackTrace();
		}
	}

	// 게시물 목록
	public void PostList(HttpServletRequest request, HttpServletResponse response) {

		conn = null;
		st = null;
		rs = null;

		HttpSession session = request.getSession(true);

		try {
			conn = ds.getConnection();
			String Query = "select * from board order by IDX desc";
			ps = conn.prepareStatement(Query);
			rs = ps.executeQuery();
			List<Map<String, String>> boardList = new ArrayList<>();
			while (rs.next()) {
				Map<String, String> boardInfo = new HashMap<>();
				boardInfo.put("tag", rs.getString("tag"));
				boardInfo.put("title", rs.getString("TITLE"));
				boardInfo.put("idx", rs.getString("IDX"));

				boardList.add(boardInfo);
			}

			session.setAttribute("boardList", boardList);

			response.sendRedirect("ViewPost.jsp");
		} catch (Exception e) {
			System.out.println(e.toString());
			e.printStackTrace();
		} finally {
			try {
				if (rs != null) {
					rs.close();
				}
				if (st != null) {
					st.close();
				}
				if (conn != null) {
					conn.close();
				}
			} catch (Exception e2) {
				System.out.println(e2.toString());
				e2.printStackTrace();
			}
		}
	}

	// 게시물 상세 보기
	public void detailPost(String IDX, String ID, String tag, String TITLE, String CONTENT, String DATE,
			HttpServletRequest request, HttpServletResponse response) {

		conn = null;
		st = null;
		rs = null;

		HttpSession session = request.getSession(true);

		try {
			conn = ds.getConnection();
			String Query = "select * from board order by IDX";
			ps = conn.prepareStatement(Query);
			rs = ps.executeQuery();
			ps.setString(1, ID);
			ps.setString(2, IDX);
			ps.setString(3, tag);
			ps.setString(4, TITLE);
			ps.setString(5, CONTENT);
			ps.setString(6, DATE);

			response.sendRedirect("detailPost.jsp");
		} catch (Exception e) {
			System.out.println(e.toString());
			e.printStackTrace();
		} finally {
			try {
				if (rs != null) {
					rs.close();
				}
				if (st != null) {
					st.close();
				}
				if (conn != null) {
					conn.close();
				}
			} catch (Exception e2) {
				System.out.println(e2.toString());
				e2.printStackTrace();
			}
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
				String query = "SELECT * FROM board WHERE title LIKE ? OR content LIKE ? ORDER BY IDX DESC";
				ps = conn.prepareStatement(query);
				ps.setString(1, "%" + keyword + "%");
				ps.setString(2, "%" + keyword + "%");
				rs = ps.executeQuery();
				while (rs.next()) {
					// 결과를 PostDTO 객체로 매핑하여 리스트에 추가
					PostDTO post = new PostDTO();

					post.setIDX(String.valueOf(rs.getInt("IDX")));
					post.setTag(rs.getString("tag"));
					post.setTITLE(rs.getString("TITLE"));
					post.setId(rs.getString("ID"));
					post.setCONTENT(rs.getString("CONTENT"));
					post.setDATE(rs.getString("DATE"));

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
		
		// 페이징을 위한 메서드
		public List<PostDTO> getPostsByPage(int offset, int itemsPerPage) {
		    List<PostDTO> result = new ArrayList<>();
		    conn = null;
		    ps = null;
		    rs = null;

		    try {
		        // Connection 객체 생성
		        conn = ds.getConnection();

		        // OFFSET과 LIMIT을 사용하여 페이징 처리 및 게시글을 IDX 기준으로 내림차순으로 정렬
		        String query = "SELECT * FROM board ORDER BY IDX DESC LIMIT ?, ?";
		        ps = conn.prepareStatement(query);
		        ps.setInt(1, offset);
		        ps.setInt(2, itemsPerPage);
		        rs = ps.executeQuery();

		        while (rs.next()) {
		            // 결과를 PostDTO 객체로 매핑하여 리스트에 추가
		            PostDTO post = new PostDTO();

		            post.setIDX(String.valueOf(rs.getInt("IDX")));
		            post.setTag(rs.getString("tag"));
		            post.setTITLE(rs.getString("TITLE"));
		            post.setId(rs.getString("ID"));
		            post.setCONTENT(rs.getString("CONTENT"));
		            post.setDATE(rs.getString("DATE"));

		            result.add(post);
		        }
		    } catch (Exception e) {
		        System.out.println("페이징 쿼리 수행 실패");
		        e.printStackTrace();
		    } finally {
		        try {
		            conn.close();
		            ps.close();
		            rs.close();
		        } catch (Exception e) {
		            System.out.println("객체 닫기 실패");
		            e.printStackTrace();
		        }
		    }

		    return result;
		}

		// 전체 항목 수를 반환하는 메서드
		public int getTotalItems() {
		    int totalItems = 0;

		    conn = null;
		    ps = null;
		    rs = null;

		    try {
		        // Connection 획득
		        conn = ds.getConnection();

		        // COUNT를 사용하여 전체 게시글 수를 가져옴
		        String query = "SELECT COUNT(*) FROM board";
		        ps = conn.prepareStatement(query);
		        rs = ps.executeQuery();

		        if (rs.next()) {
		            totalItems = rs.getInt(1); // 첫 번째 컬럼의 값을 가져옴
		        }
		    } catch (Exception e) {
		        System.out.println("SELECT COUNT 쿼리 수행 실패");
		        e.printStackTrace();
		    } finally {
		        try {
		            conn.close();
		            ps.close();
		            rs.close();
		        } catch (Exception e) {
		            System.out.println("객체 닫기 실패");
		            e.printStackTrace();
		        }
		    }

		    return totalItems;
		}
}