package com.kb;

//클래스 생성
public class CompFriend {
    //생성자 입력
    private String name;
    private String department;
    private String phone;
    public CompFriend(String name, String department, String phone) {// 변수 입력.
        this.name = name;
        this.department = department;
        this.phone = phone;
    }
    public void showInfo() { //정보 표현
        System.out.println("이름 : " + this.name);
        System.out.println("부서 : " + this.department);
        System.out.println("전화 : " + this.phone);
    }
}
