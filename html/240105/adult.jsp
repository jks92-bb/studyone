<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
    String name = request.getParameter("name");
    int year = Integer.parseInt(request.getParameter("year"));
    
   
%>

<h3> <%=name %><%= %>은 <%=year %>살로 성인입니다.</h3>


</body>
</html>