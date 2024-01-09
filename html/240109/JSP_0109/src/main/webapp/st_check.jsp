<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.ArrayList" %>
<%@ page import="javax.servlet.http.HttpSession" %>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>학생 정보 확인</title>
</head>
<body>
    <table border="1">
        <tr>
            <th>학번, 이름, 나이, 학년, 전공</th>           
        </tr>
        
        <%
       		//세션에서 데이터를 가져옴
       		 HttpSession session = request.getSession();           
        ArrayList<String> studentList = (ArrayList<String>)session.getAttribute("studentList");
            
            // 학생 정보를 테이블에 출력
            if (studentList != null && !studentList.isEmpty()) {
                for (String studentInfo : studentList) {
        %>
                    <tr>
                        <td><%= studentInfo %></td>        
                    </tr>
        <%
                }
            } else {
        %>
                <tr>
                    <td colspan="5">데이터가 없습니다.</td>
                </tr>
        <%
            }
        %>

    </table>
</body>
</html>
