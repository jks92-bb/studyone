<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<script>
		var delConfirm = window.confirm('당신의 파일이 삭제됩니다.');
		if (delConfirm) {
			window.alert('삭제되었습니다.');
			window.location = 'delete.doPosting';
		} else {
			window.alert('삭제가 취소되었습니다.');
			window.location = '/main.doPosting';
		}
	</script>
</body>
</html>