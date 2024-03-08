package com.project.PostCommand;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.project.DAO.PostDAO;
import com.project.DTO.PostDTO;

public class DetailPost implements PostService {
    public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response) {
        ArrayList<PostDTO> dtoList = null; // ArrayList 생성

        PostDAO dao = new PostDAO();
        String idx = request.getParameter("IDX");
        System.out.println(idx);
        dao.detailPost(idx, request, response);

        return dtoList;
    }
}