package com.kb;

//클래스 생성
public class CompFriend extends Friend {
    // 멤버변수


    // string형 부서
    private String department;


    // 생성자 - params : 이름 , 부서 , 전화번호.
    public CompFriend(String name, String department, String phone) {// 변수 입력.
        super(name, phone);
        this.department = department;
    }

    // 메소드명 : showinfo()
    // 기능 : 이름, 부서 , 전화번호
    @Override
    public void showInfo() { //정보 표현
        super.showInfo();
        System.out.println("부서 : " + this.department);
    }
}
