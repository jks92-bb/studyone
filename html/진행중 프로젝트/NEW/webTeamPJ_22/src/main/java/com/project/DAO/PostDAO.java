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

	public void Move(HttpServletRequest request, HttpServletResponse response) {
		HttpSession session = request.getSession(); // 기존 세션 가져오기
		session.setAttribute("newBoardList", null);
		session.setAttribute("BoardList", null);

	}

	// 게시물 작성
	public void PostInsert(String tag, String ID, String TITLE, String CONTENT, byte[] FILE, String useridx, HttpServletRequest request,
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
	            String jsScript = "alert('" + errorMessage + "'); location.href = 'newPost.jsp';";

	            // JavaScript 코드를 응답에 포함하여 클라이언트에게 전송
	            response.setContentType("text/html;charset=UTF-8");
	            PrintWriter out = response.getWriter();
	            out.println("<script>" + jsScript + "</script>");
	            out.close();
	         } else {
	            // DB 연결
	            conn = ds.getConnection();

	            // INSERT 쿼리 수행
	            String query = "INSERT INTO board (tag, ID, TITLE, CONTENT, DATE, FILE, isgood, useridx) VALUES (?, ?, ?, ?, now(), ?, 0, ?)";
	            ps = conn.prepareStatement(query);
	            ps.setString(1, tag);
	            ps.setString(2, ID);
	            ps.setString(3, TITLE);
	            ps.setString(4, CONTENT);
	            ps.setBytes(5, FILE);
	            ps.setString(6, useridx);
	            

	            try {
	               ps.executeUpdate();
	               System.out.println("게시물 작성 완료.");
	               System.out.println("태그 : " + tag);
	               System.out.println("작성자 아이디 : " + ID);
	               System.out.println("글 제목 : " + TITLE);
	               System.out.println("글 내용 : " + CONTENT);
	               response.sendRedirect("succcessPosting.jsp");
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
		session.setAttribute("boardList", null);
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
	public void detailPost(String IDX, HttpServletRequest request, HttpServletResponse response) {

	    conn = null;
	    st = null;
	    rs = null;

	    HttpSession session = request.getSession(true);

	    try {
	        conn = ds.getConnection();

	     // 증가시킬 viewcount
	        String increaseIsgoodQuery = "UPDATE board SET viewcount = viewcount + 1 WHERE IDX=?";
	        ps = conn.prepareStatement(increaseIsgoodQuery);
	        ps.setString(1, IDX);
	        ps.executeUpdate();

	        // 게시글 정보 조회
	        String query = "SELECT * FROM board WHERE IDX=?";
	        ps = conn.prepareStatement(query);
	        ps.setString(1, IDX);
	        rs = ps.executeQuery();

	        if (rs.next()) {
	            List<Map<String, String>> DVPost = new ArrayList<>();
	            Map<String, String> detailPostMap = new HashMap<>();
	            detailPostMap.put("DPIdx", rs.getString("IDX"));
	            detailPostMap.put("DPTitle", rs.getString("TITLE"));
	            detailPostMap.put("DPContent", rs.getString("CONTENT"));
	            detailPostMap.put("DPId", rs.getString("ID"));
	            detailPostMap.put("DPDate", rs.getString("DATE"));
	            detailPostMap.put("DPTag", rs.getString("tag"));
	            detailPostMap.put("DPIsgood", rs.getString("isgood"));
	            detailPostMap.put("DPuseridx", rs.getString("useridx"));
	            detailPostMap.put("DPViewCount", rs.getString("viewcount"));
	         // 맵을 리스트에 추가
	            DVPost.add(detailPostMap);
	         // 세션에 게시글 정보 저장
	            session.setAttribute("DPIdx", request.getParameter("DPIdx"));
	            session.setAttribute("DVPost", DVPost);
	            // 상세 게시글 페이지로 리다이렉트
	            response.sendRedirect("detailPost.jsp");
	        }
	    } catch (Exception e) {
	        System.out.println(e.toString());
	        e.printStackTrace();
	    } finally {
	        try {
	            if (rs != null) {
	                rs.close();
	            }
	            if (ps != null) {
	                ps.close();
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

	public void PostMove(HttpServletRequest request, HttpServletResponse response) {

		conn = null;
		st = null;
		rs = null;

		HttpSession session = request.getSession(true);
		session.setAttribute("newBoardList", null);
		try {
			conn = ds.getConnection();
			String Query = "select * from board order by DATE desc";
			ps = conn.prepareStatement(Query);
			rs = ps.executeQuery();
			List<Map<String, String>> boardList = new ArrayList<>();
			while (rs.next()) {
				Map<String, String> boardInfo = new HashMap<>();
				boardInfo.put("tag", rs.getString("tag"));
				boardInfo.put("title", rs.getString("title"));
				boardInfo.put("idx", rs.getString("idx"));
				boardInfo.put("id", rs.getString("id"));
				boardInfo.put("date", rs.getString("date"));
				boardInfo.put("isgood", rs.getString("isgood"));
				boardInfo.put("viewcount", rs.getString("viewcount"));

				boardList.add(boardInfo);
			}

			session.setAttribute("newBoardList", boardList);
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
	
	// 게시물 수정
	   public void PostUpdate(String tag, String ID, String TITLE, String CONTENT, String FILE, String IDX,
	         HttpServletRequest request, HttpServletResponse response) {
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
	         } else {
	            // DB 연결
	            conn = ds.getConnection();

	            // INSERT 쿼리 수행
	            String query = "UPDATE board SET tag = ?, TITLE = ?, CONTENT = ?, DATE = now(), FILE = ? WHERE IDX = ?";
	            ps = conn.prepareStatement(query);
	            ps.setString(1, tag);
	            ps.setString(2, TITLE);
	            ps.setString(3, CONTENT);
	            ps.setString(4, FILE);
	            ps.setString(5, IDX);

	            try {
	               ps.executeUpdate();
	               System.out.println("게시물 수정 완료.");
	               System.out.println("태그 : " + tag);
	               System.out.println("작성자 아이디 : " + ID);
	               System.out.println("글 제목 : " + TITLE);
	               System.out.println("글 내용 : " + CONTENT);
	               response.sendRedirect("succcessPosting.jsp");
	            } catch (Exception e) {
	               System.out.println("게시물 수정 실패 (catch).");
	               String errorMessage2 = "로그인 후 작성해주세요.";
	               String jsScript2 = "alert('" + errorMessage2 + "'); location.href = 'updatePost.jsp';";
	               response.setContentType("text/html;charset=UTF-8");
	               PrintWriter out2 = response.getWriter();
	               out2.println("<script>" + jsScript2 + "</script>");
	               out2.close();
	               // response.sendRedirect("login.html");
	            }
	         }
	      } catch (Exception e) {
	         System.out.println("update 쿼리 수행 실패");
	         e.printStackTrace();
	      }
	   }

	   // 게시물 삭제
	   public void PostDelete(String IDX, HttpServletRequest request, HttpServletResponse response) {
	      conn = null;
	      ps = null;
	      rs = null;      
	      try {
	               // DB 연결
	               conn = ds.getConnection();

	               // INSERT 쿼리 수행
	               String query = "delete from board WHERE IDX = ?";
	               ps = conn.prepareStatement(query);
	               ps.setString(1, IDX);
	               ps.executeUpdate();
	               response.sendRedirect("mainboard.jsp");
	      } catch (Exception e) {
	         System.out.println("Delete 쿼리 수행 실패");
	         e.printStackTrace();
	      }
	   }
	}

