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
    String action = "";

    if (year > 20) {
    	
        action = "adult.jsp";
    } else {
        action = "kid.jsp";
    }
%>

	<form action="<%= action %>" method="get">
		<input type="hidden" name="name" value="<%= name %>"> <input
			type="hidden" name="year" value="<%= year %>"> <input
			type="submit" value="분류하기">
	</form>

</body>
</html>
