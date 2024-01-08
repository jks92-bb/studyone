<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>간단한 구구단 표</title>
    <style>
        table {
            border: 1px solid black;
            border-collapse: collapse;
            width: 50%;
            margin: 20px;
        }

        th, td {
            border: 1px solid black;
            padding: 10px;
            text-align: center;
        }
    </style>
</head>
<body>
    <h2>간단한 구구단 표</h2>

    <table id="gugudanTable"></table>

    <script>
        // JavaScript를 사용하여 동적으로 표 생성
        var table = document.getElementById("gugudanTable");

        // 첫 번째 행: 구구단 제목
        var headerRow = table.insertRow();
        var headerCell = headerRow.insertCell(0);
        headerCell.innerHTML = "<b>구구단</b>";

        // 첫 번째 행: 1단부터 9단까지의 제목
        for (var i = 1; i <= 9; i++) {
            var th = document.createElement("th");
            th.innerHTML = "<b>" + i + "단</b>";
            headerRow.appendChild(th);
        }

        // 2번째부터 10번째 행: 각 행에 구구단 결과 추가
        for (var i = 1; i <= 9; i++) {
            var row = table.insertRow(); // 새로운 행 생성하여 행을 표에 추가
            var cell = row.insertCell(0); // 특정행에 새로운 셀을 추가하는 메서드
            cell.innerHTML = "<b>" + i + "단</b>"; 
            // HTML의 요소의 내용을 설정하는 속성 cell 변수가 나타내는 셀에 HTML 문자열을 삽입 구구단숫자i추가

            for (var j = 1; j <= 9; j++) {
                var td = row.insertCell(j);
                td.innerHTML = i * j;
            }
        }
    </script>

</body>
</html>

</html>