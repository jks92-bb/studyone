package com.project.DTO;

public class BoardDTO {
	private int board_no;
	private String name;	
	private String subject;
	private String content;	
	private int visit_cnt;
	private String post_uploadtime;
	
	public int getBoard_no() {
		return board_no;
	}
	public void setBoard_no(int board_no) {
		this.board_no = board_no;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getSubject() {
		return subject;
	}
	public void setSubject(String subject) {
		this.subject = subject;
	}
	public String getContent() {
		return content;
	}
	public void setContent(String content) {
		this.content = content;
	}
	public int getVisit_cnt() {
		return visit_cnt;
	}
	public void setVisit_cnt(int visit_cnt) {
		this.visit_cnt = visit_cnt;
	}
	public String getPost_uploadtime() {
		return post_uploadtime;
	}
	public void setPost_uploadtime(String post_uploadtime) {
		this.post_uploadtime = post_uploadtime;
	}

}
