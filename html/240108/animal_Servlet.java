package com.javalex.ex;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class animal_Servlet
 */
@WebServlet("/animal")
public class animal_Servlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public animal_Servlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");		
		
		//html 파일에서의 입력값 파라미터 처리
		String kinds = request.getParameter("Kinds");
		String name = request.getParameter("name");		
		int age = Integer.parseInt(request.getParameter("age"));
		String num = request.getParameter("num");
		
		// 자바빈을 이용하여, animal 객체 생성
		animal a = new animal(kinds, name, age, num);
		
		//브라우저 상, 객체 멤버변수 값들을 출력
		response.setContentType("text/html; charset=UTF-8");
		PrintWriter pw = response.getWriter();		
		pw.println("동물 종:"+a.getKinds()+"<br>");
		pw.println("이름:"+a.getName()+"<br>");
		pw.println("나이:"+a.getAge()+"<br>");
		pw.println("번호:"+a.getNumber()+"<br>");
		
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
