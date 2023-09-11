public class Ex9 {
    int a;

    public static void main(String[] args) {
        // 임의의 문자 변수 입력
        String str = "*";

        if (str.equals("a")
                || str.equals("b")
                || str.equals("c")) {// 만약 str이 "a"이거나 "b"거나 "c" 일때 영문입니다 출력
            System.out.println("영문입니다.");
        } else if (str.equals("1")
                || str.equals("2")
                || str.equals("3")) {// 만약 str이 1 이거나 2거나 3이거나 일때 숫자입니다.
            System.out.println("숫자입니다.");
        } else if (str.equals("*")
                || str.equals("-")
                || str.equals("+")) {
            System.out.println("연산자 입니다.");
        }
    }
}
// 클래스는 스펙과 기능으로 되어 있다. 즉 변수와 함수. 명사와 동사. 함수 = 메소드
// 클래스 자체변수 => 멤버변수.
