package com.kb;

public class BusinessMan extends Man {
    private String company; // 프라이빗으로 지정하여 main에서 고칠 수 없게 만들어 놓음.
    private String position;

    public BusinessMan(String company, String position, String name) {
        super(name);
        this.company = company;
        this.position = position;
    }

    @Override // 컴파일러에서 자동으로 사용되어지긴 가독성을 위해서 쓰는것이 낫다. 상위 클래스 정의를 재정의한 코드라고 알려주는 것.
    public void tellYourinfo() {
        System.out.println("My company is " + this.company);
        System.out.println("My position is " + this.position);
        super.tellYourinfo();
    }
}
