package com.project.Controller;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.DTO.MemberDTO;
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
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CommandController() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doAction(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doAction(request, response);
	}

	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException{
		request.setCharacterEncoding("UTF-8");
		String uri=request.getRequestURI();
			// 사용자가 불러온 링크를 반환		(ex) /JSP_0117/insert.do
		String conPath=request.getContextPath();	// 프로젝트명 반환
		String command=uri.substring(conPath.length());
			// insert.do, delete.do ... 형식으로 command에 저장
		
		// View(jsp), Controller(프론트컨트롤러, 커멘드)
		UserService uService=null;		// 객체 생성X, 타입 구성만 한 것
		postService pService=null;
		
		if(command.equals("/insert.do")) {	
			// "회원 추가" 수행을 요청할 시
			System.out.println("<회원 가입>을 수행합니다.");
			uService = new UserServiceInsert();
		}
		else if(command.equals("/delete.do")){
			System.out.println("<회원 탈퇴>를 수행합니다.");
			uService = new UserServiceDelete();
		}
		else if(command.equals("/login.do")){
			System.out.println("<로그인>을 수행합니다.");
			uService = new UserServiceLogin();
		}
		else if(command.equals("/search.do")) {
			System.out.println("<게시판 검색>을 수행합니다.");
			pService = new postServiceSearch();
		}
		
		
		ArrayList<PostDTO> post = null;
		ArrayList<UserDTO> user=null;
		if(uService!=null) {
			user=uService.execute(request, response);
		}
		else if(pService!=null) {
			post=pService.execute(request, response);
		}
		
		if(result!= null) {
			// controller에서만 처리할 수 있는 것 외에 
			// view의 역할이 필요할 때엔, RequestDispatcher를 사용
			// 다른 페이지에서 처리를 할 수 있도록 연결
			RequestDispatcher dis = request.getRequestDispatcher("/getList.jsp");
			dis.forward(request, response);
		}
		
		uService.execute(request, response);

	}
}