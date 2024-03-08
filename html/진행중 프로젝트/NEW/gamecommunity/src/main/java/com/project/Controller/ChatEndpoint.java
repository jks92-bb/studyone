package com.project.Controller;

import java.io.IOException;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

import javax.servlet.http.HttpSession;
import javax.websocket.EndpointConfig;
import javax.websocket.HandshakeResponse;
import javax.websocket.OnClose;
import javax.websocket.OnMessage;
import javax.websocket.OnOpen;
import javax.websocket.Session;
import javax.websocket.server.HandshakeRequest;
import javax.websocket.server.ServerEndpoint;
import javax.websocket.server.ServerEndpointConfig;

@ServerEndpoint(value = "/chat", configurator = ChatEndpoint.HttpSessionConfigurator.class)
public class ChatEndpoint {

    private static Set<Session> sessions = Collections.synchronizedSet(new HashSet<>());

    @OnOpen
    public void onOpen(Session session, EndpointConfig config) {
        HttpSession httpSession = (HttpSession) config.getUserProperties().get(HttpSession.class.getName());

        if (httpSession != null) {
            String userId = (String) httpSession.getAttribute("id");
            session.getUserProperties().put("userId", userId); 
            sessions.add(session);
            // 고유번호+ 아이디 
            //broadcast("User connected: " + userId + " (Session ID: " + userId + ")");
            // 아이디
            broadcast("User connected: " + userId);
        } else {
            System.out.println("HttpSession is null");
        }
    }

    @OnClose
//    public void onClose(Session session) {
//        sessions.remove(session);
//        broadcast("User disconnected: (Session ID: " + session.getId() + ")");
//    }
    public void onClose(Session session) {
        String userId = (String) session.getUserProperties().get("userId");
        sessions.remove(session);
        broadcast("User disconnected: " + userId);
    }

    @OnMessage
//    public void onMessage(String message, Session session) {
//        broadcast("[" + session.getId() + "] " + message);
//    }
    public void onMessage(String message, Session session) {
        String userId = (String) session.getUserProperties().get("userId");
        broadcast("[" + userId + "] " + message);
    }
//    public void onMessage(String message, String userId)
//    {
//       broadcast("[" + userId + "] " + message);
//    }

 // 이 메서드는 WebSocket 세션 목록에 있는 모든 세션에게 메시지를 브로드캐스트합니다.
    private void broadcast(String message) {
        // 세션 목록을 순회하며 각 세션에 메시지를 보냅니다.
        for (Session session : sessions) {
            try {
            	 //String userId = (String) session.getUserProperties().get("userId");
            	// 해당 세션에게 텍스트 메시지를 보냅니다.
                 session.getBasicRemote().sendText(message);
                
               // session.getBasicRemote().sendText(message);
            } catch (IOException e) {
                // 메시지 전송 중에 IOException이 발생하면 예외를 처리하고 콘솔에 출력합니다.
                e.printStackTrace();
            }
        }
    }


    // HttpSessionConfigurator class
    public static class HttpSessionConfigurator extends ServerEndpointConfig.Configurator {
        @Override
        public void modifyHandshake(ServerEndpointConfig sec, HandshakeRequest request, HandshakeResponse response) {
            // HttpSession을 가져와서 config에 저장
            HttpSession httpSession = (HttpSession) request.getHttpSession();
            sec.getUserProperties().put(HttpSession.class.getName(), httpSession);
        }
    }
}
