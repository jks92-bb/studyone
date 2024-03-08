package com.project.PostCommand;

import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import javax.servlet.http.Part;

import com.project.DAO.PostDAO;
import com.project.DAO.UserDAO;
import com.project.DTO.PostDTO;
import com.project.DTO.UserDTO;

public class PostServiceInsert implements PostService {
    public ArrayList<PostDTO> execute(HttpServletRequest request, HttpServletResponse response) {
        ArrayList<PostDTO> dtoList = null;
        
        HttpSession session = request.getSession();
        // DAO에 있는 insert 메소드 수행
        PostDAO postDAO = new PostDAO();
        String tag = request.getParameter("tag");
        String nickname = (String)session.getAttribute("nickname");
        String TITLE = request.getParameter("TITLE");
        String CONTENT = request.getParameter("CONTENT");
        String USERIDX = (String)session.getAttribute("useridx");
        ByteArrayOutputStream buffer = new ByteArrayOutputStream();
        int nRead;
        byte[] data = new byte[1024];
        
        try {
           Part filePart = request.getPart("fileUpload");
           InputStream fileContent = filePart.getInputStream();
           
           while ((nRead = fileContent.read(data, 0, data.length)) != -1) {
                buffer.write(data, 0, nRead);
            }
           buffer.flush();
        }catch(Exception e) {
           e.printStackTrace();
        }
        
        byte[] fileBytes = buffer.toByteArray();
        
        // PostDAO 클래스의 PostInsert 메소드를 호출하여 사용자 정보를 데이터베이스에 삽입
        postDAO.PostInsert(tag, nickname, TITLE, CONTENT, fileBytes, USERIDX,request, response);

        return dtoList;
    }
}

//long blob로 테이블컬럼 수정해 최대 4기가파일까지 업로드 가능
