// 예제 : 휴대폰, 스마트폰 클래스 생성 및 관계 구성.
// 확장 : 상위 클래스의 형식을 하위 클래스에 복사/붙여넣기 하여 사용.
//        멤버를 확장받아도, 상위<->하위 간 값이 공유되진 않음.
class Phone {
    // 멤버 변수 : 전화번호, 폴더 여부
    public String tel;
    public boolean foldable;
}

class SmartPhone extends Phone {
    // 멤버 변수 : 전화번호, 폴더 여부, 운영체제, 네트워크(4G/5G)

    public String os;
    public String network;
}

public class Extends {
    public static void main(String[] args) {
        // 확장 : "상위클래스로부터 하위클래스 확장판."
        // 부모, 자식 -> "관계 구성"

        Phone phone = new Phone();
        SmartPhone smartPhone = new SmartPhone();

        smartPhone.tel ="010-0000-0000";
        phone.tel = "010-0000-0000";     // 에러x, 자기 자신의 멤버 접근
        //phone.os = "Android 10";        // 에러 발생, 다른 클래스의 멤버 접근.
        // 상위 클래스 객체 ->> 하위 클래스 멤버 접근x
        smartPhone.network = "5G";      // 에러 x, 자기 자신의 멤버 접근.
        smartPhone.foldable = true;     // 에러 x, 상위 클래스의 멤버 접근.
        // 하위 클래스 객체 ->> 상위 클래스 멤버 접근o

        // 콘솔에 결과 출력
        System.out.println("smartPhone tel :"+ smartPhone.tel);
        System.out.println("Phone Tel: " + phone.tel);
        System.out.println("SmartPhone Network: " + smartPhone.network);
        System.out.println("SmartPhone Foldable: " + smartPhone.foldable);

    }
}
