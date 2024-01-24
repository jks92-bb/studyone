<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>갤러리 리스트</title>
    <!-- 여기에 필요한 CSS 파일들을 링크할 수 있습니다. -->
</head>

<body>
    <table class="gall_list">
        <caption>갤러리 리스트</caption>
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
                <tr class="ub-content us-post" data-no="${post.post_no}" data-type="icon_pic">
                    <td class="gall_num">${post.post_no}</td>
                    <td class="gall_tit ub-word">
                        <a href="view.do?postNo=${post.post_no}&amp;page=1" view-msg="">
                            <em class="icon_img icon_pic"></em>${post.post_title}
                        </a>
                        <a class="reply_numbox" href="view.do?postNo=${post.post_no}&amp;t=cv&amp;page=1">
                            <span class="reply_num">[${post.reply_count}]</span>
                        </a>
                    </td>
                    <td class="gall_writer ub-writer" data-nick="${post.writer_nick}" data-uid="${post.writer_id}"
                        data-ip="${post.writer_ip}" data-loc="list">
                        <span class="nickname" title="${post.writer_nick}"><em>${post.writer_nick}</em></span>
                        <span class="ip">(${post.writer_ip})</span>
                    </td>
                    <td class="gall_date" title="${post.post_uploadtime}">
                        ${post.post_uploadtime.substring(11, 16)}
                    </td>
                    <td class="gall_count">${post.view_count}</td>
                    <td class="gall_recommend">${post.recommend_count}</td>
                </tr>
            </c:forEach>
        </tbody>
    </table>

    <!-- 여기에 필요한 JavaScript 파일들을 링크할 수 있습니다. -->
</body>

</html>
