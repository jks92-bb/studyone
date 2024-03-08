<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
     <%@ taglib prefix = "c" uri = "http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<!-- ex html 파일에서 입력받은 처음 숫자와 끝 숫자 안에서 3의 배수인 수의 개수를 세어 출력하는 프로그램을
jstl 을 활용하여 구현하라. -->
 <%-- 입력된 숫자 처리를 위한 JSTL 코드 --%>
    <c:if test="${not empty param.number}">
        <%-- 사용자로부터 입력된 숫자 가져오기 --%>
        <c:set var="enteredNumber" value="${param.number}" />

        <%-- 숫자가 아닌 경우에 대한 예외처리 --%>
        <c:choose>
            <c:when test="${not enteredNumber.matches('[0-9]+')}">
                <%-- 숫자가 아닌 경우 에러 메시지 출력 --%>
                <p>숫자를 입력하세요.</p>
            </c:when>
            <c:otherwise>
                <%-- 숫자로 변환이 성공한 경우에만 계산 수행 --%>
                <%-- 입력된 숫자를 정수로 변환 --%>
                <c:set var="number" value="${enteredNumber}" />

                <%-- 3의 배수인 숫자의 개수를 계산 --%>
                <c:set var="count" value="0" />
                <c:forEach begin="1" end="${number}" step="1" var="currentNumber">
                    <c:if test="${currentNumber % 3 == 0}">
                        <c:set var="count" value="${count + 1}" />
                    </c:if>
                </c:forEach>

                <%-- 결과 출력 --%>
                <p>${number}까지의 3의 배수인 숫자의 개수: ${count}</p>
            </c:otherwise>
        </c:choose>
    </c:if>
</body>
</html>