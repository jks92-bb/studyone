package com.project.PostCommand;

public class PagingHelper {
	 public static int calculateTotalPages(int totalItems, int itemsPerPage) {
	        return (int) Math.ceil((double) totalItems / itemsPerPage);
	    }

	    public static int calculateStartIndex(int currentPage, int itemsPerPage) {
	        return (currentPage - 1) * itemsPerPage;
	    }

	    public static int calculateEndIndex(int startIndex, int itemsPerPage, int totalItems) {
	        return Math.min(startIndex + itemsPerPage, totalItems);
	    }
	}


