package com.javalec.ex;

import java.io.IOException;
import java.util.*;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class studentcheck_servlet
 */
@WebServlet("/studentcheck")
public class studentcheck_servlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public studentcheck_servlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		//DAO의 인스턴스 생성
		studentDAO dao = new studentDAO();
		
		// showAllstudent 메소드를 호출하여 데이터를 가져옴
        ArrayList<String> studentList = dao.showAllstudent();

        //세션얻어옴
        HttpSession session = request.getSession();
        
        // 데이터 세션에 저장
        session.setAttribute("studentList", studentList);

        // 요청을 JSP 페이지로 전달
        request.getRequestDispatcher("st_check.jsp").forward(request, response);
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
