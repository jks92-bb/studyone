<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>전체 구구단 표</title>
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
    <h2>전체 구구단 표</h2>

    <table>
        <thead>
            <tr>
                <th>구구단</th>
                <% for (int i = 1; i <= 9; i++) { %>
                    <th><%= i %>단</th>
                <% } %>
            </tr>
        </thead>
        <tbody>
            <% for (int i = 1; i <= 9; i++) { %>
                <tr>
                    <th><%= i %>단</th>
                    <% for (int j = 1; j <= 9; j++) { %>
                        <td><%= i * j %></td>
                    <% } %>
                </tr>
            <% } %>
        </tbody>
    </table>

</body>
</html>
