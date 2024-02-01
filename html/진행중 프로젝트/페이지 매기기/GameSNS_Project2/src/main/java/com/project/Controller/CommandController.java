package com.project.Controller;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.project.Command.pagination;
import com.project.Command.UserService;
import com.project.Command.UserServiceDelete;
import com.project.Command.UserServiceInsert;
import com.project.Command.UserServiceLogin;
import com.project.Command.postService;
import com.project.Command.postServiceSearch;
import com.project.DTO.PostDTO;
import com.project.DTO.UserDTO;

/**
 * Servlet implementation class CommandController
 */
@WebServlet("*.do")
public class CommandController extends HttpServlet {
	private static final long serialVersionUID = 1L;

	public CommandController() {
		super();
	}

	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		doAction(request, response);
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		doAction(request, response);
	}

	protected void doAction(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		String uri = request.getRequestURI();
		String conPath = request.getContextPath();
		String command = uri.substring(conPath.length());

		UserService uService = null;
		postService pService = null;

		ArrayList<PostDTO> post = null;
		ArrayList<UserDTO> user = null;

		if (command.equals("/insert.do")) {
			System.out.println("<회원 가입>을 수행합니다.");
			uService = new UserServiceInsert();
		} else if (command.equals("/delete.do")) {
			System.out.println("<회원 탈퇴>를 수행합니다.");
			uService = new UserServiceDelete();
		} else if (command.equals("/login.do")) {
			System.out.println("<로그인>을 수행합니다.");
			uService = new UserServiceLogin();
		} else if (command.equals("/search.do")) {
			System.out.println("<게시판 검색>을 수행합니다.");

			// 검색어 파라미터 확인
			String keyword = request.getParameter("searchKeyword");
			System.out.println("<검색어 파라미터 확인>완료");

			// page 파라미터 확인			
			String pageParam = request.getParameter("page");
			int requestedPage = 1; // 기본 페이지

			if (pageParam != null && !pageParam.isEmpty()) {
				requestedPage = Integer.parseInt(pageParam);
			}
			System.out.println("<페이지 파라미터 확인>완료");
			
			// 세션에서 Pagination 객체 가져오거나 새로 생성
			HttpSession session = request.getSession();
			pagination pagination = (pagination) session.getAttribute("pagination");
			if (pagination == null) {
				int itemsPerPage = 0;
				pagination = new pagination(requestedPage, itemsPerPage, 0);
			}

			// postServiceSearch에 pagination 객체 전달
			pService = new postServiceSearch();
			post = pService.execute(request, response, pagination);

			// post가 null이 아닌 경우에만 결과를 전달
			if (post != null) {
				request.setAttribute("postList", post);
				System.out.println("postlist 실행 ");

				// 세션에 Pagination 객체 저장
				session.setAttribute("pagination", pagination);

				// postController.do로 포워딩
				RequestDispatcher postControllerDispatcher = request.getRequestDispatcher("/PostDetailview");
				postControllerDispatcher.forward(request, response);

			} else {

				// 검색 결과가 없거나 오류 발생 시 다른 페이지로 이동하도록 수정
				response.sendRedirect("/errorPage.jsp");
			}
			System.out.println("<커맨드컨트롤러 실행>완료");

		}
	}
}
