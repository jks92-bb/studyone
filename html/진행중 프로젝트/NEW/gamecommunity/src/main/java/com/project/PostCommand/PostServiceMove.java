package com.project.PostCommand;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.project.DAO.PostDAO;
import com.project.DTO.PostDTO;

public class PostServiceMove implements PostService{
	public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response){
		ArrayList<PostDTO> dto = null;

		HttpSession session = request.getSession(false);
		// DAO 에 있는 insert 메소드 수행
		PostDAO dao = new PostDAO();
		
		dao.PostMove(request, response);
		
		return dto;
	}
}
