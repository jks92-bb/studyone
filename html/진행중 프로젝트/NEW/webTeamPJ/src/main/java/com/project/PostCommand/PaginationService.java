package com.project.PostCommand;

import java.util.List;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.project.DTO.PostDTO;


public interface PaginationService {

    // 페이징을 위한 메서드
    List<PostDTO> executePaging(HttpServletRequest request, HttpServletResponse response, int offset, int itemsPerPage);

    // 전체 항목 수를 반환하는 메서드
    public int getTotalItems(String id);
    
    public int getTotalPages(int totalItems, int itemsPerPage);

}
