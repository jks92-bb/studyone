<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<!-- input.html 에서 제출버튼 눌렀을 때, 전송받은 값들이, num1, num2, operator -->
<%
	//request 객체 :: 서버에 요청을 보낼 때 사용하는 객체
	int n1 = Integer.parseInt(request.getParameter("num1"));
	int n2 = Integer.parseInt(request.getParameter("num2"));
	String op = request.getParameter("operator");
	
	
	int result=0;
	switch(op){
	case "+":
		result = n1+n2;
		break;
	case "-":
		result = n1 -n2;
		break;		
	case "*":
		result = n1 * n2;
		break;
	case "/":
		result = n1/n2;
		break;
	case "%":
		result = n1%n2;
		break;
	}


%>

<h3>결과값 : <%=result %></h3>

</body>
</html>