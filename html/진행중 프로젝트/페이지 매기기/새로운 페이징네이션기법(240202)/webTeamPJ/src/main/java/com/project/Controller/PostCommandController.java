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
import com.project.PostCommand.PagingHelper;
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

		    // 여기에 추가: 검색 결과를 받아온 후, 결과를 request에 저장
		    ArrayList<PostDTO> searchResult = (ArrayList<PostDTO>) pService.execute(request, response);
		    request.setAttribute("postList", searchResult);

		    // 여기에 추가: 검색 결과를 받아온 후, getLIst.jsp로 포워딩
		    RequestDispatcher dispatcher = request.getRequestDispatcher("getList.jsp");
		    dispatcher.forward(request, response);
		}		
		
		
		pService.execute(request, response);
	}
	
	private void paginateAndForward(HttpServletRequest request, HttpServletResponse response,
	        List<PostDTO> resultList, String targetPage) throws ServletException, IOException {
	    // 한 페이지에 표시할 항목 수
	    int itemsPerPage = 10;
	    
	    // 전체 항목 수
	    int totalItems = resultList.size();
	    
	    // 전체 페이지 수 계산
	    int totalPages = PagingHelper.calculateTotalPages(totalItems, itemsPerPage);

	    // 현재 페이지를 요청 파라미터에서 가져오기, 없으면 1로 설정
	    int currentPage = (request.getParameter("page") != null) ? Integer.parseInt(request.getParameter("page")) : 1;
	    
	    // 현재 페이지의 시작 인덱스 계산
	    int startIndex = PagingHelper.calculateStartIndex(currentPage, itemsPerPage);
	    
	    // 현재 페이지의 끝 인덱스 계산
	    int endIndex = PagingHelper.calculateEndIndex(startIndex, itemsPerPage, totalItems);

	    // 현재 페이지에 표시할 항목들을 가져오기
	    List<PostDTO> currentPageList = resultList.subList(startIndex, endIndex);

	    // 요청 속성으로 페이징과 현재 페이지 목록 설정
	    request.setAttribute("totalPages", totalPages);
	    request.setAttribute("currentPage", currentPage);
	    request.setAttribute("currentPageList", currentPageList);

	    // 지정된 페이지로 포워딩
	    RequestDispatcher dispatcher = request.getRequestDispatcher(targetPage);
	    dispatcher.forward(request, response);
	}
}