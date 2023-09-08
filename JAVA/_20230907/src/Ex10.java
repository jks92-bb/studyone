public class Ex10 {
    public static void main(String[] args) {
        // 임의의 두 정수를 더한 결과가 짝수이면 "짝수" 아니면 "홀수"를 출력하는 프로그램.
        // 임의의 주 정수를 int 형 변수에 기입.
        int num1 = 1;
        int num2 = 2;
        // 임의의 두정수의 더한 결과가 짝수이면 짝수로 출력
        if ((num1 + num2) % 2 == 0) {
            System.out.println("짝수");
        }
        // 임의의 두정수의 더한 결과가 홀수이면 홀수로 출력
        else {
            System.out.println("홀수");
        }
    }
}
