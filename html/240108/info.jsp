<%--jsp 주석 :: 브라우저 페이지 상에서 드러나지 않음--%>
<!-- html주석 :: 브라우저 페이지 상에서 드러남-->

<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%--<%@ %> ::지시어 태그 --%>
<%--<%@ page%> :: jsp 파일의 전체적인 속성 정의 --%>
<%--<%@ include file="파일명"%> :: 외부 파일을 특정 위치에 포함 --%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%--<% %> :: 스크립트릿 태그(자바의 대부분 문법 작성o) --%>
<%--<%= %> :: 표현 태그 (자바로 선언된 변수/메소드값 반환) --%>
<%--<%! %> :: 선언 태그 (변수 및 메소드 선언, 전역변수) --%>
<%!
	String name;
	int age;
	String major;
	String hobby[];
	String site;
%>
<%!
	//메소드로 , 영문으로 입력받은 value 값을 한글로 반환
	public String getMajor(String m){
		switch(m){
		case "computer":
			m="컴공과"; break;
		case "math":
			m="수학과"; break;
		case "mechanic":
			m="기계과"; break;
		}
		return m;
	}

	public String getSite(String s){
		switch(s){
		case "naver":
			s="네이버"; break;
		case "google":
			s="구글"; break;
		case "github":
			s="깃헙"; break;
		}
		return s;
	}
	public String getHobby(String h[]){
		String result ="";
		if(h==null){
			result+="취미없음";
		}
		else{
			for(int i=0; i<h.length; i++){
				switch(h[i]){
				case "jogging":
					result+="조깅";break;
				case "swimming":
					result+="수영";break;
				case "pcgame":
					result+="피시게임";break;
				case "sleep":
					result+="잠";break;
			}
				if(i!=h.length-1){
					result+=",";
					
				}
		}
		
	}
		return result;
	}
		
%>

<%
name = request.getParameter("name");
age = Integer.parseInt(request.getParameter("age"));
major = request.getParameter("major");
hobby = request.getParameterValues("hobby");
site = request.getParameter("site");
       
%>

	<h3><%= name %>님
		<%= age %>살이며  취미는<%=getHobby(hobby) %> 가 있으며 
		전공은 <%=getMajor(major) %>이며, 취미는 <%=getHobby(hobby) %> 
		애용하는 사이트는 <%=getSite(site) %> 입니다.
		
	</h3>
	 

</body>
</html>