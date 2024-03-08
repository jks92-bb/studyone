package com.project.PostCommand;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.project.DAO.PostDAO;
import com.project.DAO.UserDAO;
import com.project.DTO.PostDTO;
import com.project.DTO.UserDTO;

public class PostServiceDelete implements PostService {
	public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		ArrayList<PostDTO> dtoList = null;
		HttpSession session = request.getSession();
		List<Map<String, String>> boardList = (List<Map<String, String>>) session.getAttribute("DVPost");
		if (boardList != null && !boardList.isEmpty()) {
			for (Map<String, String> boardInfo : boardList) {
				// DAO에 있는 insert 메소드 수행
				session.setAttribute("DPIdx", boardInfo.get("DPIdx"));
			}
		}
		PostDAO postDAO = new PostDAO();
		String IDX = (String) session.getAttribute("DPIdx");
		System.out.println("글 idx : " + IDX);
		// PostDAO 클래스의 PostInsert 메소드를 호출하여 사용자 정보를 데이터베이스에 삽입
		postDAO.PostDelete(IDX, request, response);

		return dtoList;
	}
}
