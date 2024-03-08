package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class leave_em
 */
@WebServlet("/leave")
public class leave_em extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public leave_em() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doAction(request,response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		
		 String leaveText = request.getParameter("leave_txt");

	        if ("탈퇴합니다".equals(leaveText)) {
	            // "탈퇴합니다"를 입력하면 계정 삭제 로직 수행	
	        	employeeDAO dao = new employeeDAO();
	        	HttpSession session = request.getSession();
	        	String id = session.getAttribute("id").toString();
	        	dao.deletemployee(id);
	        	session.invalidate();
	            response.sendRedirect("input_login.html"); // 성공 페이지로 리다이렉트
	        } else {
	            System.out.println("deletEmployee() 메서드 오류 발생"); // 실패 페이지로 리다이렉트 또는 다른 처리
	        }
		
	}

	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException{
		request.setCharacterEncoding("UTF-8");
		
		// "어느 계정을 삭제할 것인가?" -> 지금 활용할 수 있는 건 세션에 있는 id
		HttpSession session = request.getSession();
		String id = session.getAttribute("id").toString();
		
		//세션에 있는 아이디 값은 받은 상태.
		//DB에 접속해서, id 변수의 값을 아이디 값으로 갖는 "데이터 삭제"
		employeeDAO dao = new employeeDAO();
		dao.deleteUser(id);
		session.invalidate();
		response.sendRedirect("input_login.html");
		
	}
	
}
