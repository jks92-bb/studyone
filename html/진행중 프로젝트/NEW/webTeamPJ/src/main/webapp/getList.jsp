<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@ page import = "com.project.PostCommand.PaginationService" %>
<%@ page import = "com.project.DTO.PostDTO" %>
<%@ page import = "com.project.PostCommand.PostServiceSearch" %>

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
            <c:forEach items="${postList}" var="post" varStatus="loop">
                <c:if test="${loop.index < 10}"> <!-- 페이지당 10개씩 표시 -->
                    <tr class="${loop.index % 2 == 0 ? 'even' : 'odd'}" data-no="${post.IDX}">
                        <td class="post_num">${post.IDX}</td>
                        <td class="post_title" style="text-align:center">
                            <a href="search.doposting?postNo=${post.IDX}&page=1">${post.getTITLE()}</a>
                        </td>
                        <td class="id">${post.getId()}</td>
                        <td class="post_date" title="${post.getDATE()}">
                            ${post.getDATE().substring(11, 16)}
                        </td>
                        <!-- 추가로 필요한 컬럼에 대한 내용을 추가할 수 있습니다. -->
                    </tr>
                </c:if>
            </c:forEach>
        </tbody>
    </table>

    <!-- Pagination -->
    <c:if test="${not empty postList}">
        <div>
            <p>Current Page: ${currentPage}</p>
            <p>Total Pages: ${totalPages}</p>

            <!-- 이전 페이지로 가는 링크 -->
            <c:if test="${currentPage > 1}">
                <a href="getList.jsp?page=${currentPage - 1}">Previous</a>
            </c:if>

            <!-- 페이지 번호 표시 -->
            <c:forEach begin="1" end="${totalPages}" var="i">
                <c:choose>
                    <c:when test="${i eq currentPage}">
                        <span>${i}</span>
                    </c:when>
                    <c:otherwise>
                        <a href="getList.jsp?page=${i}">${i}</a>
                    </c:otherwise>
                </c:choose>
            </c:forEach>

            <!-- 다음 페이지로 가는 링크 -->
            <c:if test="${currentPage < totalPages}">
                <a href="getList.jsp?page=${currentPage + 1}">Next</a>
            </c:if>
        </div>
    </c:if>

    <!-- 여기에 필요한 JavaScript 파일들을 링크할 수 있습니다. -->
</body>

</html>
