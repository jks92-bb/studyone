package com.javalex.ex;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class servlet_test1
 */
@WebServlet("/servlet_test")
public class servlet_test1 extends HttpServlet {
	private static final long serialVersionUID = 1L;

    /**
     * Default constructor. 
     */
    public servlet_test1() {
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		
		String name =request.getParameter("name");			
		String age =request.getParameter("age");		
		String major =request.getParameter("major");		
		String[] hobby = request.getParameterValues("hobby");
		String site =request.getParameter("site");
		
		response.setContentType("text/html; charset=UTF-8");
		PrintWriter pw = response.getWriter();
		pw.println("<p>이름 :"+ name + "</p>");
		pw.println("<p>나이 :"+ age + "</p>");
		
			//전공값 출력
				switch(major) {
				case "computer":
					major="컴공과";
					break;
				case "math":
					major="수학과";
					break;
				case "mechanic":
					major = "기계공학";
					break;
				
				}
		
		response.getWriter().append("<p>전공 :"+ major + "</p>");
		
		
		pw.println("<p>취미: ");
		if(hobby==null) {	//사용자가 아무선택 없을시
			pw.println("취미 없음");
		}
		else {	//사용자가 취미란에 어떤 것이라도 선택한 경우
			for(int i =0; i<hobby.length; i++) {
				switch(hobby[i]) { //0부터 시작하여,hobby 원소들을 한글로 변형
				case "jogging":
					hobby[i]="조깅";break;
				case "swimming":
					hobby[i]="수영";break;
				case "pcgame":
					hobby[i]="피시게임";break;
				case "sleep":
					hobby[i]="잠";break;
				}
				
				pw.println(hobby[i]);
				if(i!=hobby.length-1) {	//마지막 원소의 차례가 아니라면
					pw.println(",");
				}
			}
			
		}
		pw.println("</p>");
				
//		for(String str : hobby) {
//			response.getWriter().append( str + " ," );
//		}	
	
		
		//사이트 출력
		switch(site) {
		case "naver":
			site="네이버";
			break;
		case "google":
			site="구글";
			break;
		case "github":
			site = "깃헙";
			break;
		
		}
		pw.println("<p>사이트 :"+ site + "</p>");
		
		// \"로 println 수행하면 "로 전송됨
		pw.println("<form action=\"input.html\">");
		pw.println("<input type =\"submit\" value=\"다시작성하기\"/>");
		pw.println("</form>");
		
		//String redirectUrl = "info.jsp?name=" + name + "&age=" + age + "&major=" + major + "&hobby=";
		 
       
        // 사이트 정보 추가
        //redirectUrl += "site=" + site;

        // 새로운 창으로 리다이렉트
        //response.sendRedirect(redirectUrl);
		
		
		//response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
