<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>
<!DOCTYPE html>
<html lang="en">

<head>
   <meta charset="utf-8" />
   <meta http-equiv="X-UA-Compatible" content="IE=edge" />
   <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
   <meta name="description" content="" />
   <meta name="author" content="" />
   <title>Dashboard - SB Admin</title>
   <link href="https://cdn.jsdelivr.net/npm/simple-datatables@7.1.2/dist/style.min.css" rel="stylesheet" />
   <link href="css/styles.css" rel="stylesheet" />
     <script src="https://use.fontawesome.com/releases/v6.3.0/js/all.js" crossorigin="anonymous"></script>
</head>

<body class="sb-nav-fixed">
   <nav class="sb-topnav navbar navbar-expand navbar-dark bg-dark">
      <!-- Navbar Brand-->
      <a class="navbar-brand ps-3" href="index.html">AZSS.GG</a>
      <!-- Sidebar Toggle-->
      <button class="btn btn-link btn-sm order-1 order-lg-0 me-4 me-lg-0" id="sidebarToggle" href="#!"><i
            class="fas fa-bars"></i></button>
      <!-- Navbar Search-->
      <form class="d-none d-md-inline-block form-inline ms-auto me-0 me-md-3 my-2 my-md-0">
         <div class="input-group">
            <input class="form-control" type="text" placeholder="검색어를 입력해봐" aria-label="Search for..."
               aria-describedby="btnNavbarSearch" />
            <button class="btn btn-primary" id="btnNavbarSearch" type="button"><i
                  class="fas fa-search"></i></button>
         </div>
      </form>
      <!-- Navbar-->
      <ul class="navbar-nav ms-auto ms-md-0 me-3 me-lg-4">
         <li class="nav-item dropdown">
            <a class="nav-link dropdown-toggle" id="navbarDropdown" href="#" role="button" data-bs-toggle="dropdown"
               aria-expanded="false"><i class="fas fa-user fa-fw"></i></a>
            <ul class="dropdown-menu dropdown-menu-end" aria-labelledby="navbarDropdown">
               <li>
                  <hr class="dropdown-divider" />
               </li>
               <li><a class="dropdown-item" href="logout.do" >로그아웃</a></li>
            </ul>
         </li>
      </ul>
   </nav>
   <div id="layoutSidenav">
      <div id="layoutSidenav_nav">
         <nav class="sb-sidenav accordion sb-sidenav-dark" id="sidenavAccordion">
            <div class="sb-sidenav-menu">
               <div class="nav">
                  <div class="sb-sidenav-menu-heading">Core</div>
                  <a class="nav-link" href="mainboard.html">
                     <div class="sb-nav-link-icon"><i class="fas fa-tachometer-alt"></i></div>
                     메인화면
                  </a>
                  <div class="sb-sidenav-menu-heading">Interface</div>
                  <a class="nav-link collapsed" href="#" data-bs-toggle="collapse"
                     data-bs-target="#collapseLayouts" aria-expanded="false" aria-controls="collapseLayouts">
                     <div class="sb-nav-link-icon"><i class="fas fa-columns"></i></div>
                     인기 게시판
                     <div class="sb-sidenav-collapse-arrow"><i class="fas fa-angle-down"></i></div>
                  </a>
                  <a class="nav-link collapsed" href="#" data-bs-toggle="collapse" data-bs-target="#collapsePages"
                     aria-expanded="false" aria-controls="collapsePages">
                     <div class="sb-nav-link-icon"><i class="fas fa-book-open"></i></div>
                     게시판 목록
                     <div class="sb-sidenav-collapse-arrow"><i class="fas fa-angle-down"></i></div>
                  </a>
                  <div class="collapse" id="collapsePages" aria-labelledby="headingTwo"
                     data-bs-parent="#sidenavAccordion">
                     <nav class="sb-sidenav-menu-nested nav accordion" id="sidenavAccordionPages">
                        <a class="nav-link collapsed" href="#" data-bs-toggle="collapse"
                           data-bs-target="#pagesCollapseAuth" aria-expanded="false"
                           aria-controls="pagesCollapseAuth">
                           리그오브레전드
                           <div class="sb-sidenav-collapse-arrow"><i class="fas fa-angle-down"></i></div>
                        </a>
                        <a class="nav-link collapsed" href="#" data-bs-toggle="collapse"
                           data-bs-target="#pagesCollapseAuth" aria-expanded="false"
                           aria-controls="pagesCollapseAuth">
                           FC온라인
                           <div class="sb-sidenav-collapse-arrow"><i class="fas fa-angle-down"></i></div>
                        </a>
                        <a class="nav-link collapsed" href="#" data-bs-toggle="collapse"
                           data-bs-target="#pagesCollapseAuth" aria-expanded="false"
                           aria-controls="pagesCollapseAuth">
                           스타크래프트
                           <div class="sb-sidenav-collapse-arrow"><i class="fas fa-angle-down"></i></div>
                        </a>
                        <a class="nav-link collapsed" href="#" data-bs-toggle="collapse"
                           data-bs-target="#pagesCollapseAuth" aria-expanded="false"
                           aria-controls="pagesCollapseAuth">
                           메이플스토리
                           <div class="sb-sidenav-collapse-arrow"><i class="fas fa-angle-down"></i></div>
                        </a>
                     </nav>
                  </div>
                  <div class="sb-sidenav-menu-heading">Addons</div>
                  <a class="nav-link" href="Mypage.jsp">
                     <div class="sb-nav-link-icon"><i class="fas fa-chart-area"></i></div>
                     마이페이지
                  </a>
               </div>
            </div>
            <!--  <div class="sb-sidenav-footer" id = "online-chat">-->
            대화창
             <div id="chat"></div>
    <input type="text" id="messageInput" onkeydown="handleKeyPress(event)" />
    <button onclick="sendMessage()"> Send</button>

    <script>
        const ws = new WebSocket("ws://localhost:8182/webTeamPJ/chat");

        ws.onopen = function(event) {
            appendMessage("대화를 입력해주세요");
        };

        ws.onmessage = function(event) {
            const message = event.data;
            appendMessage(message);
            //const userId = session.getAttribute("id");
            //appendMessage("[" + userId + "] " + message);
            
        };

        ws.onclose = function(event) {
            appendMessage("WebSocket connection closed");
        };

        function sendMessage() {
            const messageInput = document.getElementById("messageInput");
            const message = messageInput.value;

            ws.send(message);
            messageInput.value = "";
        }

        function appendMessage(message) {
            const chatDiv = document.getElementById("chat");
            const messageDiv = document.createElement("div");
            messageDiv.textContent = message;
            chatDiv.appendChild(messageDiv);
            
            chatDiv.scrollTop = chatDiv.scrollHeight;
        }
        
        function handleKeyPress(event) {
            if (event.key === "Enter") {
                sendMessage();
                event.preventDefault(); // 엔터 키의 기본 동작(새 줄 추가)을 막습니다.
            }
        }
    </script>
            </div>
            
         </nav>
      </div>
      <div id="layoutSidenav_content">
         <main>
            <div class="container-fluid px-4">
               <h1 class="mt-4">AZSS.GG</h1>
               <ol class="breadcrumb mb-4">
                  <li class="breadcrumb-item active">인기 게시판</li>
               </ol>
               <div class="row">
                  <div class="col-xl-3 col-md-6">
                     <div class="card bg-primary text-white mb-4">
                     <img src = "https://github.com/db-ung/web_pj/blob/main/%EA%B4%91%EC%88%98/image/%EB%A6%AC%EA%B7%B8%EC%98%A4%EB%B8%8C%EB%A0%88%EC%A0%84%EB%93%9C.png?raw=true" class="card-img-top fixed-height" alt="LOL Image">
                        <div class="card-body">리그오브레전드</div>
                        <div class="card-footer d-flex align-items-center justify-content-between">
                           <a class="small text-white stretched-link" href="#">View Details</a>
                           <div class="small text-white"><i class="fas fa-angle-right"></i></div>
                        </div>
                     </div>
                  </div>
                  <div class="col-xl-3 col-md-6">
                     <div class="card bg-warning text-white mb-4">
                     <img src = "https://github.com/db-ung/web_pj/blob/main/%EA%B4%91%EC%88%98/image/FC%EC%98%A8%EB%9D%BC%EC%9D%B8.png?raw=true" class="card-img-top fixed-height" alt="FConline Image">
                        <div class="card-body">FC온라인</div>
                        <div class="card-footer d-flex align-items-center justify-content-between">
                           <a class="small text-white stretched-link" href="#">View Details</a>
                           <div class="small text-white"><i class="fas fa-angle-right"></i></div>
                        </div>
                     </div>
                  </div>
                  <div class="col-xl-3 col-md-6">
                     <div class="card bg-success text-white mb-4">
                     	<img src = "https://github.com/db-ung/web_pj/blob/main/%EA%B4%91%EC%88%98/image/%EB%A9%94%EC%9D%B4%ED%94%8C%EC%8A%A4%ED%86%A0%EB%A6%AC.png?raw=true" class="fixed-height card-img-top" alt="MapleStory Image">
                        <div class="card-body">메이플스토리</div>
                        <div class="card-footer d-flex align-items-center justify-content-between">
                           <a class="small text-white stretched-link" href="#">View Details</a>
                           <div class="small text-white"><i class="fas fa-angle-right"></i></div>
                        </div>
                     </div>
                  </div>
                  <div class="col-xl-3 col-md-6">
                     <div class="card bg-danger text-white mb-4">
                     <img src = "https://github.com/db-ung/web_pj/blob/main/%EA%B4%91%EC%88%98/image/%ED%8C%94%EC%9B%94%EB%93%9C.png?raw=true" class="card-img-top fixed-height" alt="palworld Image">
                        <div class="card-body">팔월드</div>
                        <div class="card-footer d-flex align-items-center justify-content-between">
                           <a class="small text-white stretched-link" href="#">View Details</a>
                           <div class="small text-white"><i class="fas fa-angle-right"></i></div>
                        </div>
                     </div>
                  </div>
               </div>
               <div class="card mb-4">
                  <div class="card-header">
                     <i class="fas fa-table me-1"></i>
                     최신글
                  </div>
                  <div class="card-body">
                     <table id="datatablesSimple">
                        <thead>
                           <tr>
                              <th>태그</th>
                              <th>제목</th>
                              <th>작성자</th>
                              <th>작성일</th>
                              <th>조회수</th>
                           </tr>
                        </thead>
                        <tfoot>
                           <tr>
                              <th>태그</th>
                              <th>제목</th>
                              <th>작성자</th>
                              <th>작성일</th>
                              <th>조회수</th>
                           </tr>
                        </tfoot>
                        <tbody>
                           <%
                          System.out.println(session.getAttribute("id"));
                           // 세션에서 boardList 가져오기
                           List<Map<String, String>> boardList = (List<Map<String, String>>) session.getAttribute("newBoardList");
                           if (boardList != null && !boardList.isEmpty()) {
                              for (Map<String, String> boardInfo : boardList) { // 콜론(:)를 사용하여 반복문을 정의합니다.
                           %>
                           <tr onclick="location.href='detailPost.jsp'">
                              <th><a><%=boardInfo.get("tag")%></a></th>
                              <th><a href="detailPost.jsp"><%=boardInfo.get("title")%></a></th>
                              <th><a><%=boardInfo.get("id")%></a></th>
                              <th><a><%=boardInfo.get("date")%></a></th>
                              <th><a><%=boardInfo.get("isgood")%></a></th>
                           </tr>
                           <%
                           }
                           } else {
                           %>
                           <li>No new posts available.</li>
                           <%
                           }
                           %>
                        </tbody>
                     </table>
                  </div>
               </div>
            </div>
         </main>
         <footer class="py-4 bg-light mt-auto">
            <div class="container-fluid px-4">
               <div class="d-flex align-items-center justify-content-between small">
                  <div class="text-muted">Copyright &copy; Your Website 2023</div>
                  <div>
                     <a href="#">Privacy Policy</a>
                     &middot;
                     <a href="#">Terms &amp; Conditions</a>
                  </div>
               </div>
            </div>
         </footer>
      </div>
   </div>
   
   
   <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js"
      crossorigin="anonymous"></script>
   <script src="js/scripts.js"></script>
   <script src="https://cdnjs.cloudflare.com/ajax/libs/Chart.js/2.8.0/Chart.min.js" crossorigin="anonymous"></script>
   <script src="assets/demo/chart-area-demo.js"></script>
   <script src="assets/demo/chart-bar-demo.js"></script>
   <script src="https://cdn.jsdelivr.net/npm/simple-datatables@7.1.2/dist/umd/simple-datatables.min.js"
      crossorigin="anonymous"></script>
   <script src="js/datatables-simple-demo.js"></script>
    
   
</body>

</html>