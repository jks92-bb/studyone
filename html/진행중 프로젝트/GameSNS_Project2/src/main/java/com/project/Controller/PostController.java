package com.project.Controller;

import java.io.IOException;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.project.Command.Pagination;
import com.project.DAO.PostDAO;
import com.project.DTO.PostDTO;

/**
 * Servlet implementation class PostController
 */
@WebServlet("/PostDetailview")
public class PostController extends HttpServlet {
    private static final long serialVersionUID = 1L;

    private PostDAO postDAO;

    public PostController() {
        super();
        postDAO = new PostDAO();
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String pageParam = request.getParameter("page");
        int requestedPage = 1; // 기본 페이지

        if (pageParam != null && !pageParam.isEmpty()) {
            requestedPage = Integer.parseInt(pageParam);
        }
        
        System.out.println("Requested Page: " + requestedPage); 

        int itemsPerPage = 15;
        int offset = (requestedPage - 1) * itemsPerPage;
        String keyword = request.getParameter("keyword");
        System.out.println("Search Keyword: " + keyword);
        
        int totalItems = postDAO.getTotalItemCount(keyword);

        // Pagination 객체 생성
        Pagination pagination = new Pagination(requestedPage, itemsPerPage, totalItems);

        // 글 목록 가져오기
        List<PostDTO> posts = postDAO.getPostsByPage(keyword, pagination);

        // 페이지 정보를 request에 저장
        request.setAttribute("pagination", pagination);

        // 글 목록 버튼을 request에 저장
        request.setAttribute("posts", posts);

        // JSP 페이지로 forward
        RequestDispatcher dispatcher = request.getRequestDispatcher("getList.jsp");
        dispatcher.forward(request, response);
    }

    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        doGet(request, response);
    }
}
