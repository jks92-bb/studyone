package com.project.DTO;

public class PostDTO {		
	
	private int post_no;	
	private String post_group;	
	private String post_title;
	private String id;	
	private String post_content;
	private String visit_cnt;
	private String post_uploadtime;
	
	public int getPost_no() {
		return post_no;
	}
	public void setPost_no(int post_no) {
		this.post_no = post_no;
	}
	
	public String getPost_group() {
		return post_group;
	}
	public void setPost_group(String post_group) {
		this.post_group = post_group;
	}
	public String getPost_title() {
		return post_title;
	}
	public void setPost_title(String post_title) {
		this.post_title = post_title;
	}
	public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}
	public String getPost_content() {
		return post_content;
	}
	public void setPost_content(String post_content) {
		this.post_content = post_content;
	}
	public String getVisit_cnt() {
		return visit_cnt;
	}
	public void setVisit_cnt(String visit_cnt) {
		this.visit_cnt = visit_cnt;
	}
	public String getPost_uploadtime() {
		return post_uploadtime;
	}
	public void setPost_uploadtime(String post_uploadtime) {
		this.post_uploadtime = post_uploadtime;
	}
	
	

}
