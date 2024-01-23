<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.util.List" %>
<%@ page import="java.util.ArrayList" %>
<%@ page import="java.util.Date" %>
<%@ page import="java.text.SimpleDateFormat" %>
<%@ page import="java.sql.*" %>
<%@ page import ="javax.sql.DataSource" %>
<%@ page import = "javax.naming.*" %>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Insert title here</title>
</head>
<body>
 <h1>Database Content:</h1>
    
    <%    
    
        Connection conn = null;
        PreparedStatement pstmt = null; // PreparedStatement 사용
        ResultSet rs = null;
        DataSource ds = null;
        
        try {
			//jdbc 드라이버 로드
			 Context ctx = new InitialContext();
			 ds = (DataSource) ctx.lookup("java:comp/env/jdbc/mysql");
			 System.out.println("드라이버 로드완료");
			 
			
		}catch(Exception e) {
			System.out.println("생성자 에러");
			e.printStackTrace();
		}        
        

        try {
        	//connection 객체 생성
            conn = ds.getConnection();           
            
            
         	// SQL 쿼리 실행
            String query = "SELECT * FROM post_info WHERE post_title LIKE ? OR post_content LIKE ?";
             
            pstmt = conn.prepareStatement(query);
            
            pstmt.setString(1, "%" + "메이플" + "%"); // pstmt를 사용하여 매개변수 설정
            pstmt.setString(2, "%" + "메이플" + "%");
            rs = pstmt.executeQuery();
            System.out.println("쿼리 맥개변수 완료");
            

            // 결과 출력
            while (rs.next()) {
            	// post_title만 출력
                out.println("Post Title: " + rs.getString("post_title") + "<br>");
                
                        	
            }
            System.out.println("결과 출력완료");
            
            
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            // 리소스 닫기
            try { if (rs != null) rs.close(); } catch (Exception e) { e.printStackTrace(); }
            try { if (pstmt != null) pstmt.close(); } catch (Exception e) { e.printStackTrace(); }
            try { if (conn != null) conn.close(); } catch (Exception e) { e.printStackTrace(); }
            System.out.println("리소스 닫기 완료");
        }
    %>
</body>
</html>
