package com.javalex.ex.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.javalex.ex.DAO.MemberDAO;
import com.javalex.ex.DTO.MemberDTO;

public class MemberServiceTest implements MemberService {
	public ArrayList<MemberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
        // DAO에 있는 test 메소드만 수행
        MemberDAO dao = new MemberDAO();
        String id = request.getParameter("id");
        String pw = request.getParameter("pw");

        // MemberTest 메소드가 로그인 성공 여부를 반환하도록 가정
        boolean loginSuccess = dao.MemberTest(id, pw);
        System.out.println("MEmberServiceTest 진행중");

        if (loginSuccess) {
            // 로그인 성공 시 세션 설정 등의 작업을 수행
            HttpSession session = request.getSession();
            session.setAttribute("loggedInUser", id); // 로그인한 사용자의 아이디를 세션에 저장
            // 다른 페이지로 리다이렉트 등의 작업을 수행
            // 예: response.sendRedirect("success.jsp");
            //System.out.println(request.getAttribute("로그인 테스트 완료"));         
           
            
            
        } else {
            // 로그인 실패 시 에러 메시지를 설정
            request.setAttribute("errorMessage", "로그인 실패: 아이디 또는 비밀번호가 일치하지 않습니다.");
            // 실패 시 로그인 페이지로 다시 이동하는 등의 작업을 수행
            // 예: request.getRequestDispatcher("login.jsp").forward(request, response);
            System.out.println(request.getAttribute("errorMessage"));
            
        }
		return null;
    }
}
