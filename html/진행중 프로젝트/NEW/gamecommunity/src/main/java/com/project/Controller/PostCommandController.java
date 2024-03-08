package com.project.Controller;

import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

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
import com.project.PostCommand.DetailPost;
import com.project.PostCommand.PostService;
import com.project.PostCommand.PostServiceDelete;
import com.project.PostCommand.PostServiceInsert;
import com.project.PostCommand.PostServiceMove;
import com.project.PostCommand.ViewPost;
import com.project.PostCommand.PostServiceSearch;
import com.project.PostCommand.PostServiceupdate;

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
		UserService uService = null;
		HttpSession session = request.getSession(false);

		if (command.equals("/insert.doPosting")) {
			System.out.println("<게시물 작성>(을)를 수행합니다.");
			try {
				pService = new PostServiceInsert();
			} catch (Exception e) {
				e.printStackTrace();
			}
		} else if (command.equals("/viewPL.doPosting")) {
			System.out.println("<게시물 보기>(을)를 수행합니다.");
			pService = new ViewPost();
		} else if (command.equals("/search.doPosting")) {
			System.out.println("<게시판 검색>을 수행합니다.");
			pService = new PostServiceSearch();
			System.out.println("<게시판 검색>완료");
			// 여기에 추가: 검색 결과를 받아온 후, 결과를 request에 저장
			ArrayList<PostDTO> searchResult = (ArrayList<PostDTO>) pService.execute(request, response);
			request.setAttribute("postList", searchResult);
			// 여기에 추가: 검색 결과를 받아온 후, getLIst.jsp로 포워딩
			RequestDispatcher dispatcher = request.getRequestDispatcher("getList.jsp");
			dispatcher.forward(request, response);
		} else if (command.equals("/detail.doPosting")) {
			String selectIdx = request.getParameter("IDX");
			System.out.println(selectIdx);
			request.setAttribute("selectIdx", selectIdx);
			pService = new DetailPost();
		} else if (command.equals("/update.doPosting")) {
			pService = new PostServiceupdate();
		} else if (command.equals("/delete.doPosting")) {
			System.out.println("<게시글 삭제>를 수행합니다.");
			pService = new PostServiceDelete();
		} else if (command.equals("/FIFA.doPosting")) {
			System.out.println("<게시판 이동>을 수행합니다.");
			pService = new PostServiceMove();
			response.sendRedirect("FIFA.jsp");
		} else if (command.equals("/starcraft.doPosting")) {
			System.out.println("<게시판 이동>을 수행합니다.");
			pService = new PostServiceMove();
			response.sendRedirect("starcraft.jsp");
		} else if (command.equals("/LoL.doPosting")) {
			System.out.println("<게시판 이동>을 수행합니다.");
			pService = new PostServiceMove();
			response.sendRedirect("LoL.jsp");
		} else if (command.equals("/palworld.doPosting")) {
			System.out.println("<게시판 이동>을 수행합니다.");
			pService = new PostServiceMove();
			response.sendRedirect("palworld.jsp");
		} else if (command.equals("/maplestory.doPosting")) {
			System.out.println("<게시판 이동>을 수행합니다.");
			pService = new PostServiceMove();
			response.sendRedirect("maplestory.jsp");
		} else if (command.equals("/main.doPosting")) {
			System.out.println("<게시판 이동>을 수행합니다.");
			pService = new PostServiceMove();
			response.sendRedirect("mainboard.jsp");
		}
		pService.execute(request, response);
	}
}