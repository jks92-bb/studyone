<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.sql.*, java.util.ArrayList, com.javalec.ex.studentDAO" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
  <table border="1">
        <tr>
            <th>학번, 이름, 나이, 학년, 전공</th>           
        </tr>

          <% 
            try {
                // DAO 클래스의 인스턴스 생성
                studentDAO dao = new studentDAO();

                // DAO에서 데이터를 가져오기
                ArrayList<String> studentList = dao.showAllstudent();

                // 테이블에 각 학생 정보를 삽입
                for (String studentInfo : studentList) {
        %>
                    <tr>
                        <td><%= studentInfo %></td>        
                    </tr>
        <%
                }
                if (studentList.isEmpty()) {
        %>
                <tr>
                    <td colspan="5">데이터가 없습니다.</td>
                </tr>
        <%
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        %>

</body>
</html>