<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>댓글 페이지</title>
    <script src="https://code.jquery.com/jquery-3.6.4.min.js"></script>
    <script>
        function recommendComment(commentId, userId) {
            // 여기에서 로그인 여부를 확인하는 로직을 추가
            var isLoggedIn = /* 여기에 로그인 여부 확인하는 코드 추가 (예: 세션 체크) */;

            if (!isLoggedIn) {
                alert("로그인하셔야 가능합니다.");
                return;
            }

            // 추천 버튼 클릭 시 서버로 요청을 보내고, 성공 여부에 따라 화면을 업데이트
            $.post("CommentRecommendServlet", {commentId: commentId, userId: userId}, function(data) {
                if (data.success) {
                    // 추천 성공 시, 여기에서 화면을 업데이트하는 로직을 추가할 수 있음
                    alert("댓글 추천이 완료되었습니다.");
                } else {
                    alert("댓글 추천에 실패했습니다.");
                }
            });
        }
    </script>
</head>
<body>
    <!-- 댓글 내용 및 추천 버튼이 있는 부분 -->
    <div id="comment1">
        <p>댓글 내용...</p>
        <button onclick="recommendComment('comment1', 'userId123')">추천</button>
    </div>

    <div id="comment2">
        <p>댓글 내용...</p>
        <button onclick="recommendComment('comment2', 'userId123')">추천</button>
    </div>

    <!-- 추가 댓글 내용 및 추천 버튼이 있는 부분 -->
    <!-- ... -->

</body>
</html>
