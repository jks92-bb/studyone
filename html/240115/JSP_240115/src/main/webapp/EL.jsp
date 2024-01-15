<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<h3>스크립트릿으로 출력 </h3>
<p>기업명 : <%="삼성" %></p>

<h3>EL 태그로 출력</h3>
<p>기업명은 ${"삼성"}입니다.</p>
<script>	
	console.log(`100+100의 결과는 ${100+100}입니다.`);
</script>


</body>
</html>