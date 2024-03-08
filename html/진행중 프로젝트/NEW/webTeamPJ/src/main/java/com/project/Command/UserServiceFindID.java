package com.project.Command;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.util.ArrayList;

import com.project.DAO.UserDAO;
import com.project.DTO.UserDTO;

public class UserServiceFindID implements UserService {
	public ArrayList<UserDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		ArrayList<UserDTO> dtoList = null;

		// DAO에 있는 findIdPw 메소드 수행
		UserDAO userDAO = new UserDAO();
		String name = request.getParameter("name");
		String tel = request.getParameter("tel");
		
		// UserDAO 클래스의 findIdPw 메소드를 호출하여 사용자 정보를 찾기
		userDAO.findId(name, tel, request, response);

		return dtoList;
	}
}
