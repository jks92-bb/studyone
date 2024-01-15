<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<h3>회원정보 출력</h3>
<p>
	이름 : ${param.name}<br>
	나이 : ${param.age} <br>
</p>
<jsp:useBean id="user1" class = "com.javalex.ex.UserDTO" scope="page"/>
<jsp:setProperty name ="user1" property ="name" value ="${param.name}"/>
<jsp:setProperty name ="user1" property ="age" value ="${param.age}"/>
<!--  EL 태그를 활용하면, 자동으로 형변환 -->

<h3>DTO 활용해서 출력</h3>
<p>
	
	이름 : <jsp:getProperty property="name" name="user1"/> <br>
	나이 : <jsp:getProperty property = "age" name = "user1"/><br>
</p>
</body>
</html>