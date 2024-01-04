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
	//숫자 파라미터들을 가져옵니다.
	String number1Str = request.getParameter("number1");
	String number2Str = request.getParameter("number2");
	String operator = request.getParameter("operator");

	// 결과를 계산합니다.
	double result = calculateResult(number1Str, number2Str, operator);

	// 결과를 문자열로 변환합니다.
	String resultStr = String.valueOf(result);
%>

<h2>결과 : <%= resultStr %></h2>

<%
    // 숫자와 연산자를 받아 계산하는 메서드
    
	
	
      
%>

</body>
</html>
