<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.util.*" %>
<%@ page import = "java.util.Date" %>
<%@page import="java.text.SimpleDateFormat"%> 

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	// 서버에 저장되어있는 세션을 불러와서, 사용자 이름을 브라우저 출력
	Enumeration e = session.getAttributeNames();
	while(e.hasMoreElements()){
		String key = e.nextElement().toString(); //세션의 키값(인덱스값)
		String value = session.getAttribute(key).toString();
		//value에 사용자 이름이 담겨져있는 상태
		
		out.println(value+" 용사님!!");
	
	}
	
%>
<% Date date = new Date(); 
SimpleDateFormat sd = new SimpleDateFormat("yyyy년-MM월-dd일(hh시:mm분:ss초) E요일"); 

String time = sd.format(date); 
%> 

<p>환영합니다.!!</p>
<p> <%=time %>에 접속하셨습니다.</p>

</body>
</html>