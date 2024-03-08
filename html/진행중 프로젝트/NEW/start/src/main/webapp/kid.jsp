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

	<h3><%= session.getAttribute("name") %>님
		<%= session.getAttribute("age") %>살이며 성인이 아닙니다.
	</h3>
	<!--  <h3>살로 성인이 아닙니다.</h3> -->



</body>
</html>