package com.project.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.project.DAO.PostDAO;
import com.project.DTO.PostDTO;

public class postServiceSearch implements postService {
	public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response){
		ArrayList<PostDTO> result = new ArrayList<PostDTO>();
		
		PostDAO dao = new PostDAO();
		result = (ArrayList<PostDTO>) dao.searchPosts(null);		
		request.setAttribute("list", result);
		
		
		return result;
		
	}
}
