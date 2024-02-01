package com.project.Command;

public class pagination {
	// 현재 페이지
	private int nowPage = 1;
	// 페이지당 게시물수
	private int postCountPerPage = 15;
	// 총 게시물수
	private int totalPostCount;
	// 페이지 그룹당 페이지수
	private int pageCountPerPageGroup = 5;// 페이지그룹 5
	private String keyword;

	public pagination(int totalPostCount, int nowPage, int postCountPerPage) {
		// 전달받은 총 게시물 수를 클래스의 totalPostCount 필드에 할당
		this.totalPostCount = totalPostCount;
		// 전달받은 현재 페이지를 클래스의 nowPage 필드에 할당
		this.nowPage = nowPage;
		// 전달받은 페이지당 게시물 수를 클래스의 postcountPerpage 필드에 할당
		this.postCountPerPage = postCountPerPage;
	}
	
	// 검색어 설정 메서드 추가
		public void setKeyword(String keyword) {
			this.keyword = keyword;
		}

	public pagination(int totalPostCount) {
		this.totalPostCount = totalPostCount;
	}

	public pagination(int totalPostCount, int nowPage) {
		this.totalPostCount = totalPostCount;
		this.nowPage = nowPage;
	}

	public int getNowPage() {
		return nowPage;
	}

	// 현재 페이지 게시글 시작 번호
	public int getStartRowNumber() {
		return (this.nowPage - 1) * this.postCountPerPage + 1;
	}

	// 현재 페이지 게시글 끝 번호
	public int getEndRowNumber() {
		int endRowNumber = this.nowPage * this.postCountPerPage;
		if (this.totalPostCount < endRowNumber)
			endRowNumber = totalPostCount;
		return endRowNumber;
	}

	// 총 페이지수
	public int getTotalPage() {
		int totalPage = totalPostCount / postCountPerPage;
		if (totalPostCount % postCountPerPage != 0)
			totalPage = totalPage + 1;
		return totalPage;
	}

	// 총 페이지 그룹 수
	public int getTotalPageGroup() {
		int totalPageGroup = getTotalPage() / pageCountPerPageGroup;
		if (getTotalPage() % pageCountPerPageGroup != 0)
			totalPageGroup += 1;
		return totalPageGroup;
	}

	// 현재 페이지 그룹 번호
	public int getNowPageGroup() {
		int nowPageGroup = nowPage / pageCountPerPageGroup;
		if (nowPage % pageCountPerPageGroup != 0)
			nowPageGroup += 1;
		return nowPageGroup;

	}

	// 현재 페이지가 속한 그룹의 시작 페이지 번호
	public int getStartPageOfPageGroup() {
		return (this.getNowPageGroup() - 1) * pageCountPerPageGroup + 1;
	}

	// 현재 페이지가 속한 그룹의 마지막 페이지 번호
	public int getEndPageOfPageGroup() {
		int endPage = getNowPageGroup() * pageCountPerPageGroup;
		if (endPage > getTotalPage())
			endPage = getTotalPage();
		return endPage;
	}

	// 이전 페이지 그룹이 존재하는지 여부
	public boolean isPreviousPageGroup() {
		boolean flag = false;
		if (getNowPageGroup() > 1)
			flag = true;
		return flag;
	}

	// 다음 페이지 그룹이 존재하는지 여부
	public boolean isNextPageGroup() {
		boolean flag = false;
		if (getTotalPageGroup() > getNowPageGroup())
			flag = true;
		return flag;
	}

	

}