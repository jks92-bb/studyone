<%@ page import="java.net.URLEncoder" %>
<%@ page import="java.net.URLDecoder" %>
<%@ page import="java.util.List" %>
<%@ page import="com.project.DAO.BoardDAO" %>
<%@ page import="com.project.DTO.BoardDTO" %>
<%@ page import="com.util.DataSource" %>
<%@ page contentType="text/html; charset=UTF-8" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/fmt" prefix="fmt" %>

<%
    request.setCharacterEncoding("UTF-8");
    String cp = request.getContextPath();

    // BoardDAO dao = new BoardDAO(DBConn.getConnection());
    Connection conn = DBConn.getConnection();
    BoardDAO dao = new BoardDAO(conn);

    // ...

    // DB에서 해당 페이지를 가져옴
    List<BoardDTO> lists = dao.getLists(start, end, searchKey, searchValue);

    // 검색 - 검색기능을 사용할 경우 get방식의 주소에 추가로 적용.
    String param = "";
    // null이 아니면 검색을 한 것이다.
    if (!searchValue.equals("")) {

        // 이때 주소를 만들어준다
        param = "?searchKey=" + searchKey;
        param += "&searchValue=" + URLEncoder.encode(searchValue, "UTF-8");

    }

    // 페이징 처리
    String listUrl = "list.jsp" + param; // param 검색을 안했으면 null이 들어간다.됬다면 주소

    String pageIndexList =
            myUtil.pageIndexList(currentPage, totalPage, listUrl);

    // 글보기 주소
    String articleUrl = cp + "/board/article.jsp";

    if (param.equals("")) { // 검색을 안했을 때
        articleUrl += "?pageNum=" + currentPage;
    } else { // 검색을 했을 때
        articleUrl += param + "&pageNum=" + currentPage;
    }

    DBConn.close();
%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <title>게 시 판</title>

    <link rel="stylesheet" type="text/css" href="<%= cp %>/board/css/style.css"/>
    <link rel="stylesheet" type="text/css" href="<%= cp %>/board/css/list.css"/>

    <script type="text/javascript">

        function sendIt() {

            var f = document.searchForm;

            // 검색 버튼을 누를경우 리스트페이지로 이동
            f.action = "<%= cp %>/board/list.jsp";
            f.submit();
        }

    </script>
</head>
<body>

<div id="bbsList">

    <!-- ... (이전 코드와 동일) -->

    <div id="bbsList_list">
        <div id="title">
            <dl>
                <dt class="num">번호</dt>
                <dt class="subject">제목</dt>
                <dt class="name">작성자</dt>
                <dt class="created">작성일</dt>
                <dt class="hitCount">조회수</dt>
            </dl>
        </div>

        <div id="lists">
            <c:forEach var="dto" items="${lists}">
                <dl>
                    <dd class="num">${dto.num}</dd>
                    <dd class="subject">
                        <a href="${articleUrl}&num=${dto.num}">
                            ${dto.subject}
                        </a>
                        <!-- currentPage는 현재 내가보고있는 페이지 -->
                    </dd>
                    <dd class="name">${dto.name}</dd>
                    <dd class="created">${dto.created}</dd>
                    <dd class="hitCount">${dto.hitCount}</dd>
                </dl>
            </c:forEach>
        </div>
        <div id="footer">
            ${pageIndexList}
        </div>
    </div>

</div>

</body>
</html>
