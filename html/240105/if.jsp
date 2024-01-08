<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<!-- jsp 파일 3개 필요 :: kid.jsp, adult.jsp if.jsp -->
<%
String name = request.getParameter("name");
	int age = Integer.parseInt(request.getParameter("age"));
	
	if(age<20){
		//sendRedirect() :: form의 action 역할 (response객체)
		
		response.sendRedirect("kid.jsp");
		session.setAttribute("name",name);
		session.setAttribute("age",age);
	}
	else{
		response.sendRedirect("adult.jsp");
	}
%>

</body>
</html>