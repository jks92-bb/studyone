<%@ page import="com.javalex.ex.student" %>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    
    
    <!-- 액션 태그 -->
    <!-- userbean :: 특정 자바빈의 내용을 가져옴 -->
<jsp:useBean id="student1" class="com.javalex.ex.student" scope="page"/>

<!-- setProperty :: 특정 필드의 값을 설정 -->
<jsp:setProperty property="name" name="student1" value="이성주"/>
<jsp:setProperty property="age" name="student1" value="23"/>
<jsp:setProperty property="gender" name="student1" value="남성"/>


<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<!-- getProperty :: 특정 필드의 값을 반환 -->
student1 이름 :: <jsp:getProperty name="student1" property="name" />
student1 나이 :: <jsp:getProperty name="student1" property="age" />

<%
	//page 지시어로, 자바빈 파일을 import 해야 사용 가능
	student s1 = new student("이순신",100,"남성");
	student s2 = new student();
	s2.setName("장보고");
	s2.setAge(24);
	s2.setGender("남성");
	
%>
</body>
</html>