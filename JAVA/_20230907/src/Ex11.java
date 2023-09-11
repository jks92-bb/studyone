public class Ex11 {
    public static void main(String[] args) {
        // 임의의 두 정수를 뺀 결과가 0이거나 양수이면 +, 음수이면 -를 출력하는 프로그램.
        // 임의의 주 정수를 int 형 변수에 기입.
        int num1 = 331;
        int num2 = 212;
        // 임의의 두 정수를 뺀 결과값을 int형 변수에 기입.
        int result = num1 - num2;
        // 임의의 두정수를 뺀 결과가 0이거나 양수이면 +를 출력하는 if 구문
        if (result >= 0) {
            System.out.println("양수");
        }
        // 임의의 두정수를 뺀 결과가 음수이면 -를 출력하는 if 구문
        else {
            System.out.println("음수");
        }
    }
}
