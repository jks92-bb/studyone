// 예제 :  휴대폰 클래스 생성
// 클래스 구현
//class 클래스명 {
//    멤버선언 : 멤버 변수(필드) , 멤버 함수(메소드)
//}
class Phone {
    // 멤버 변수 선언
    private String os;  // 운영 체제
    private int year;   // 출시 년도
    private String color; // 색상

    // 메소드 선언

    public String getOs() {
        return os;
    }

    public void setOs(String os) {
        this.os = os;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    // 메소드 선언(메소드 오버로딩)
    public void Print() {
        System.out.println("운영 체제 : " + this.os);
        System.out.println("출시 년도 : " + this.year);
        System.out.println("색상 : " + this.color);

    }

    public void Print(String o, int y, String c) {
        // 멤버들의 정보를 갱신
        this.os = o;    // 이 객체의 os 값을 o값으로 저장한다.
        this.year = y;
        this.color = c;

        // 즉시 출력
        this.Print(); // Print(o,y,c)와 Print()는 독립된 함수.


    }


}


public class Review {
    public static void main(String[] args) {
        // 객체 생성
        // [클래스명] [인스턴스명] = new [클래스명] ();
        Phone p = new Phone();  // p 객체 생성.

        // 멤버 접근
        // [인스턴스명].[멤버명]
        p.setOs("Android Icecream Sandwich");
        p.setYear(2000);
        p.setColor("Black");

//        System.out.println("운영 체제 : " + p.getOs());
//        System.out.println("출시 년도 : " + p.getYear());
//        System.out.println("색상 : " + p.getColor());
        p.Print();
        System.out.println();
        p.Print("Nuga", 2000, "white");


    }
}
