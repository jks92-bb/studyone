package com.project.Command;

public class Pagination {
	private int currentPage;
	private int pageSize;
	private int totalItems;

	public Pagination(int currentPage, int pageSize, int totalItems) {
		this.currentPage = currentPage;
		this.pageSize = pageSize;
		this.totalItems = totalItems;
	}

	public int getCurrentPage() {
		return currentPage;
	}

	public int getPageSize() {
		return pageSize;
	}

	public int getTotalItems() {
		return totalItems;
	}

	public int getTotalPages() {
		return (int) Math.ceil((double) totalItems / pageSize);
	}

	public boolean hasPreviousPage() {
		return currentPage > 1;
	}

	public boolean hasNextPage() {
		return currentPage < getTotalPages();
	}

	public void nextPage() {
		if (hasNextPage()) {
			currentPage++;
		}
	}

	public void previousPage() {
		if (hasPreviousPage()) {
			currentPage--;
		}
	}
	 public void setTotalItems(int totalItems) {
	        this.totalItems = totalItems;
	    }
	 public int getItemsPerPage() {
	        return pageSize;
	    }
	

	public void setKeyword(String keyword) {
		// TODO Auto-generated method stub
		
	}

	public int getOffset() {
		// TODO Auto-generated method stub
		return 0;
	}
}
