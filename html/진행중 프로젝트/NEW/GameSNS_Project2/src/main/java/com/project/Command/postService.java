package com.project.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.project.DTO.PostDTO;

public interface postService {
	// 이전과 다음 버튼에 대한 상수 정의
    String PREVIOUS_BUTTON = "이전";
    String NEXT_BUTTON = "다음";
    /**
     * 게시글과 관련된 작업을 수행하는 메서드.
     * 
     * @param request  HttpServletRequest 객체
     * @param response HttpServletResponse 객체
     * @return ArrayList<PostDTO> 객체, 게시글 정보를 담은 리스트
     */
    public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response);

    /**
     * 게시글과 관련된 작업 및 페이징을 처리하는 메서드.
     * 
     * @param request    HttpServletRequest 객체
     * @param response   HttpServletResponse 객체
     * @param pagination pagination 객체, 페이징 정보를 담고 있는 클래스
     * @return ArrayList<PostDTO> 객체, 페이징된 게시글 정보를 담은 리스트
     */
	public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response, pagination pagination);
}
