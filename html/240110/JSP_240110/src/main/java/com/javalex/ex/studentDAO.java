package com.javalex.ex;

import java.sql.*;
import java.util.ArrayList;

public class studentDAO {
	// DAO :: DB와 관련된 처리를 자바빈으로 따로 만들어서 처리
	
	//데이터베이스 접속에 필요한 정보를 필드로 초기화
	private String url= "jdbc:mysql://localHost:3306/apidb";
	private String id= "root";
	private String pw = "1234";
	
	//데이터베이스 사용에 필요한 객체 3가지
	private Connection conn= null;	//jdbc 연결 객체
	private Statement st = null;	//sql 문 실행 객체
	private ResultSet rs = null;	//sql문 실행 결과 담는 객체
	
	public studentDAO() {
		try { //"시도"
			//jdbc 드라이버 불러오기.
			Class.forName("com.mysql.jdbc.Driver");
		}
		catch(Exception e) {	//try 문에서 에러가 나면 catch문으로 넘김
			System.out.println(e.toString());
			
		}
	}
	
	//메소드 :: DB연동이 필요한 기능들을 아래에 메소드 형태로 나누어 작성
	public ArrayList<String> showAllstudent(){
		ArrayList<String> result = new ArrayList<String>();
		
		try {
			//데이터베이스 접속 시도
			conn=DriverManager.getConnection(url,id,pw);
			
			String query = "SELECT* FROM student ";
			st=conn.createStatement();	// statement 객체 초기화
			rs= st.executeQuery(query); 	//sql문 실행 결과를 rs에 저장
			
			while(rs.next()) {
				// 테이블 표 한칸에 하나의 데이터의 모든 칼럼 정보가 들어가기 때문에
				// 아예 문자열 형태로 만들어서, ArrayList에 하나씩 저장
				String r="";
				r += rs.getInt("hakbun");
				r += ",";
				r += rs.getString("name");
				r += ",";
				r += rs.getInt("age");
				r += ",";
				r += rs.getInt("grade");
				r += ",";
				r += rs.getString("major");
				// 5가지 칼럼의 정보가 r에 담김
				
				result.add(r);
			}
		}
		catch(Exception e) {
			System.out.println(e.toString());
		}
		
		
		return result;		
	}
	
	
	
	
}
