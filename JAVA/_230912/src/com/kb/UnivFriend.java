package com.kb;

//클래스 생성
public class UnivFriend {
    //생성자 기입.
    private String name;
    private String major;
    private String phone;

    public UnivFriend(String name,String major,String phone){//생성자 변수 기입.
        this.name = name;
        this.major = major;
        this.phone = phone;
    }
     @Override
     // 정보 표출 라인.
     public void showinfo(){
         System.out.println("이름 :"+this.name);
         System.out.println("전공 :"+this.major);
         System.out.println("전화 :"+this.phone);

     }





}
