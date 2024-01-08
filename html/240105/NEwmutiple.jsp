<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>간단한 구구단</title>
    <style>
        .gugudan {
            display: flex;
            flex-wrap: wrap;
            justify-content: space-between;
        }

        .gugudan-column {
            flex: 0 0 30%;
            margin: 10px;
            border: 1px solid black;
            padding: 10px;
        }

        .gugudan-title {
            font-weight: bold;
            text-align: center;
        }

        .gugudan-item {
            text-align: center;
        }
    </style>
</head>
<body>
    <h2>간단한 구구단</h2>
	
    <div class="gugudan">
        <% for (int i = 2; i <= 9; i++) { %>
            <div class="gugudan-column" id="gugudan<%= i %>">
                <div class="gugudan-title" ><%= i %>단</div>
                <% for (int j = 1; j <= 9; j++) { %>
                    <div class="gugudan-item"><%= i %> * <%= j %> = <%= i * j %></div>
                <% } %>
            </div>
        <% } %>
    </div>

</body>
</html>
