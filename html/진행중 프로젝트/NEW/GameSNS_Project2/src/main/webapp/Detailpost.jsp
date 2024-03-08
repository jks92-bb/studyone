<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>게시글 상세 정보</title>
</head>
<body>
 <h1>게시글 상세 정보</h1>

    <c:if test="${not empty post}">
        <h2>${post.post_title}</h2>
        <hr>
        <p>작성자: ${post.id}</p>
        <p>작성일: ${post.post_uploadtime}</p>
        <p>조회수: ${post.visit_cnt}</p>
        <p>내용: ${post.post_content}</p>
        <!-- 필요한 정보들을 추가로 표시할 수 있습니다. -->
    </c:if>

</body>
</html>