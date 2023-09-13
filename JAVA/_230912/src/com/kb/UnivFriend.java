package com.kb;

//클래스 생성
public class UnivFriend extends Friend {
    // 멤버벼누


    // String형 전공.
    private String major;


    //생성자 - params : 이름, 전공, 전화번호.
    public UnivFriend(String name, String major, String phone) {//생성자 변수 기입.
        super(name, phone);
        this.major = major;

    }

    // 정보 표출 라인.
    // 메소드명 : showinfo()
    // 기능 : 이름, 전공, 전화번호 출력

    /**
     * method name ; showinfo
     * access : public
     * params : name
     * return : void
     * description : 객체의 이름, 전공, 전화번호 출력
     * author : jks
     * make date : 2023. 09. 13
     * update history
     */
    @Override
    public void showInfo() {
        super.showInfo();
        System.out.println("전공 :" + this.major);


    }


}
