<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>게시판</title>
    <!-- 여기에 필요한 CSS 파일들을 링크할 수 있습니다. -->
</head>

<body>
    <table class="gall_list">
        <caption>게시판</caption>
        <colgroup>
            <col style="width:7%">
            <col>
            <col style="width:18%">
            <col style="width:6%">
            <col style="width:6%">
            <col style="width:6%">
        </colgroup>
        <thead>
            <tr>
                <th scope="col">번호</th>
                <th scope="col">제목</th>
                <th scope="col">글쓴이</th>
                <th scope="col">작성일</th>
                <th scope="col">조회</th>
                <th scope="col">추천</th>
            </tr>
        </thead>
        <tbody>
            <c:forEach items="${postList}" var="post">
                <tr class="content" data-no="${post.post_no}" >
                    <td class="post_num">${post.post_no}</td>
                    <td class="post_title" style= "text-align:center">
                        <a href="view.do?postNo=${post.post_group}&amp;page=1" view-msg="" >
                            ${post.post_title}
                        </a>
                       
                    </td>
                    <td class = "id">${post.id}</td>
                   
                    <td class="post_date" title="${post.post_uploadtime}">
                        ${post.post_uploadtime.substring(11, 16)}
                    </td>
                     <td class = "visit_cnt">${post.visit_cnt}</td>
                     
                </tr>
            </c:forEach>
        </tbody>
    </table>

    <!-- 여기에 필요한 JavaScript 파일들을 링크할 수 있습니다. -->
</body>

</html>
