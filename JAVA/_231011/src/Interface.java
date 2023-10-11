
// 추상 클래스 발전 -> 인터페이스 개념
// 원칙적으로 자바에선 다중 상속 (여러 클래스 상속) 지원
// = > 인터페이스를 통해서는 다중 상속을 지원
// = > 추상 클래스보다는 문법이 다소 깐깐

// class가 아닌 interface 키워드 통해서 선언
//interface 클래스명{
// 멤버 선언..
//}

// 인터페이스 통해서 객체 생성x
// 인터페이스를 상속받아서 재정의/구체화 진행.
interface Animal1{
    // 필드 : 상수의 형태로 선언(변수 선언x)
    //        상수 -> 선언과 동시에 초기화, 값 변경x
    // 멤버 함수(메소드) : 추상메소드로만 구성
    // "모든 멤버들의 접근제어자가 반드시 public이어야 한다."
    // public static final [타입명] [ 상수명] = [상수값]
    // public static final String species; -> 에러 o, 변수 선언x

    // abstract 키워드 생략
    // -> 기본적으로 추상메소드로 취급, 정의부 작성 x
    public void Print();
    abstract public void cry();


}

// implements : 인터페이스 상속 받을 때 사용하는 키워드
class puppy implements Animal1 {

    //인터페이스 Animal1에 있는 ,print()및 cry() 필수로 구현.

    @Override
    public void Print() {
        System.out.println("강아지입니다.");

    }

    @Override
    public void cry() {
        System.out.println("월월월");

    }
}

public class Interface {
    public static void main(String[] args) {
        //"인터페이스 통해서는 객체 생성x"
        //Animal1 animal1 = new Animal1() : 오류발생

        puppy p = new puppy();
        p.Print();
        p.cry();




    }
}
