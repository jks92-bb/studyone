package com.project.Command;

public class Pagination {
    // 현재 페이지
    private int currentPage;
    // 한 페이지에 표시되는 아이템 수
    private int pageSize;
    // 전체 아이템 수
    private int totalItems;

    // 생성자
    public Pagination(int currentPage, int pageSize, int totalItems) {
        this.currentPage = currentPage;
        this.pageSize = pageSize;
        this.totalItems = totalItems;
    }

    // 현재 페이지 반환
    public int getCurrentPage() {
        return currentPage;
    }

    // 한 페이지에 표시되는 아이템 수 반환
    public int getPageSize() {
        return pageSize;
    }

    // 전체 아이템 수 반환
    public int getTotalItems() {
        return totalItems;
    }

    // 전체 페이지 수 반환
    public int getTotalPages() {
        return (int) Math.ceil((double) totalItems / pageSize);
    }

    // 이전 페이지가 있는지 확인
    public boolean hasPreviousPage() {
        return currentPage > 1;
    }

    // 다음 페이지가 있는지 확인
    public boolean hasNextPage() {
        return currentPage < getTotalPages();
    }

    // 다음 페이지로 이동
    public void nextPage() {
        if (hasNextPage()) {
            currentPage++;
        }
    }

    // 이전 페이지로 이동
    public void previousPage() {
        if (hasPreviousPage()) {
            currentPage--;
        }
    }

    // 전체 아이템 수 설정
    public void setTotalItems(int totalItems) {
        this.totalItems = totalItems;
    }

    // 한 페이지에 표시되는 아이템 수 반환
    public int getItemsPerPage() {
        return pageSize;
    }

    // 검색어 설정
    public void setKeyword(String keyword) {
        // 검색어 설정 로직을 추가
    }

    // 현재 페이지의 시작 인덱스 반환 (데이터베이스에서 사용할 경우에 유용)
    public int getOffset() {
        // 현재 페이지의 시작 인덱스 계산 로직을 추가
        return 0;
    }

    // 요청된 페이지 설정
    public void setRequestedPage(int requestedPage) {
        // 요청된 페이지 설정 로직을 추가
    }

    // 한 페이지에 표시되는 아이템 수 설정
    public void setItemsPerPage(int itemsPerPage) {
        // 한 페이지에 표시되는 아이템 수 설정 로직을 추가
    }
}
