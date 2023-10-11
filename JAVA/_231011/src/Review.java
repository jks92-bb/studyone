
// super(): 상위 클래스의 생성자를 호출하는 메소드
// super - > 자주 사용하지는 않음.

import java.util.Scanner;

class Transport {    // 이동수단 클래스
    // 멤버 변수 : start(출발지), end(도착지)
    private String start;
    private String end;

    // 아래를 선언하면서, 기본 생성자는 없는 셈으로 치게 됌/
    public Transport(String s, String e) {
        this.start = s;
        this.end = e;
        System.out.println(this.start + "에서" + this.end + "로 이동합니다.");
    }

}

class Train extends Transport {        // 기차 클래스
    // 멤버 변수 : start(출발지), end(도착지), name(기차이름)
    private String name;

    public Train(String s, String e, String n) {
        super(s, e);    // 상위 클래스 생성자 : 2개의 정보 요청
        // 하위 생성자에서는 반드시, super()를 가장 먼저 사용해야 함.
        this.name = n;
        System.out.println("탑승하는 기차는 "+this.name + "입니다.");

    }


}

class Bus extends Transport {          // 버스 클래스
    // 멤버 변수 : start(출발지), end(도착지), company(소속회사)
    private String company;

    public Bus(String n, String e, String c){
        super(n,e);
        this.company = c;
        System.out.println(this.company+"소속 버스입니다.");

    }

}

public class Review {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Train과 Bus에 대해 객체 생성
        Train train = new Train("대구", "서울", "SRT  ");
        Bus bus = new Bus("서울", scanner.next(), "서울고속");


    }
}
