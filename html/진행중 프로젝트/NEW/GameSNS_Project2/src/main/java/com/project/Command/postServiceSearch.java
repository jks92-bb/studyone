package com.project.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.project.DAO.PostDAO;
import com.project.DTO.PostDTO;

public class postServiceSearch implements postService {

	public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response, pagination pagination) {
	    ArrayList<PostDTO> result = new ArrayList<PostDTO>();

	    System.out.println("페이징네이션&게시글 검색 처리시작(postServiceSearch)");

	    // 검색어 받아오기.
	    String keyword = request.getParameter("searchKeyword");

	    // page 파라미터 확인
	    String pageParam = request.getParameter("page");
	    int requestedPage = 1; // 기본 페이지

	    // 검색어가 비어있지 않은 경우에만 처리
	    if (keyword != null && !keyword.isEmpty()) {
	        System.out.println("검색 키워드: " + keyword);

	        PostDAO dao = new PostDAO();

	        // Pagination 객체에 검색어와 페이지 정보 설정
	        pagination.setKeyword(keyword);

	        // 페이징된 결과를 가져오도록 DAO 메서드 호출
	        result = (ArrayList<PostDTO>) dao.getPostsByPage(keyword, pagination.getOffset(), pagination.getItemsPerPage());

	        // 페이징 정보 설정
	        pagination.setTotalPostCount(dao.getTotalItemCount(keyword));
	        pagination.setNowPage(requestedPage);
	    } else {
	        System.out.println("검색어가 없습니다.(postServiceSearch)");
	    }        

	    // request에 Pagination 객체 추가
	    request.setAttribute("pagination", pagination);

	    System.out.println("pagination 추가완료(postServiceSearch)");

	    return result;
	}

	@Override
	public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		return null;
	}
}
