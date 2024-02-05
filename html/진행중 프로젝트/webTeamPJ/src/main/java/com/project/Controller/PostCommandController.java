package com.project.Controller;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.project.Command.UserService;
import com.project.Command.UserServiceDelete;
import com.project.Command.UserServiceFindID;
import com.project.Command.UserServiceFindPW;
import com.project.Command.UserServiceInsert;
import com.project.Command.UserServiceLogin;
import com.project.Command.UserServiceLogout;
import com.project.Command.UserServiceUpdate;
import com.project.DTO.PostDTO;

import com.project.PostCommand.PaginationService;
import com.project.PostCommand.PostService;
import com.project.PostCommand.PostServiceInsert;
import com.project.PostCommand.ViewPost;
import com.project.PostCommand.PostServiceSearch;

/**
 * Servlet implementation class PostCommandController
 */
@WebServlet("*.doPosting")
public class PostCommandController extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public PostCommandController() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		doPostingAction(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		doPostingAction(request, response);
	}

	protected void doPostingAction(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		String uri = request.getRequestURI();
		String conPath = request.getContextPath();
		String command = uri.substring(conPath.length());

		// View(jsp), Controller(프론트컨트롤러, 커멘드)
		PostService pService = null;

		HttpSession session = request.getSession(false);

		if (command.equals("/insert.doPosting")) {
			System.out.println("<게시물 작성>(을)를 수행합니다.");
			try {
				pService = new PostServiceInsert();
			}
			catch(Exception e) {
				e.printStackTrace();
			}
		}
		else if (command.equals("/viewPL.doPosting")) {
			System.out.println("<게시물 보기>(을)를 수행합니다.");
			pService = new ViewPost();
		}
		else if (command.equals("/search.doPosting")) {
            System.out.println("<게시판 검색>을 수행합니다.");
            pService = new PostServiceSearch();
            System.out.println("<게시판 검색>완료");

            // 검색 결과를 받아온 후, 결과를 request에 저장
            ArrayList<PostDTO> searchResult = (ArrayList<PostDTO>) pService.execute(request, response);
            request.setAttribute("postList", searchResult);

         // 페이징 처리를 위한 데이터 설정
            int itemsPerPage = 10; // 페이지당 보여줄 항목 수 설정
            int totalItems = searchResult.size(); // 검색 결과의 총 항목 수
            int totalPages = (int) Math.ceil((double) totalItems / itemsPerPage);
            int currentPage = 1; // 기본으로 첫 페이지 설정

            // 페이징 처리를 위해 필요한 데이터를 request에 저장
            request.setAttribute("currentPage", currentPage);
            request.setAttribute("totalPages", totalPages);

            // 검색 결과를 받아온 후, getList.jsp로 포워딩
            RequestDispatcher dispatcher = request.getRequestDispatcher("getList.jsp");
            dispatcher.forward(request, response);
            return; // 포워딩 후에는 메서드 종료
        }

        pService.execute(request, response);
    }

		
	}