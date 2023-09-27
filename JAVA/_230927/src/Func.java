import java.util.Scanner;

public class Func {
    // 함수 수현
    // public [반환형] [함수명] (매개변수타입 매개변수명, ....){}
    public static int plus(int a, int b) {
        return a + b;
    }
    // 출력은, 콘솔 상에서 확인할 수 있는 값일 뿐이고
    // 반환은, 프로그램 실행 흐름 상 "나오는" 결과물

    public static int minus(int a, int b) {
        return a - b;
    }

    public static int multi(int a, int b) {
        return a * b;
    }

    public static double divi(int a, int b) {
        return a / (double)b ;
        // (int) / (int) = (int)
        // (double) / (int) = (double)
        // (int) / (double) = (double)
        // (double) / (double) = (double)
    }

    public static int remain(int a, int b) {
        return a % b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);


        // 함수 : 특정 목적을 위해 묶어둔 "명령문들의 집합"

        //예제 : 계산기 구현(+, -, *, /, %)
        // 2개의 숫자와 1개의 연산자 입력받고, 연산 결과 출력하라.

        // 1. 입력(2개의 숫자, 1개의 연산자(char))
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        char oper = scanner.next().charAt(0);

        // 2. 연산자에 따라, 연산 수행.

        int result;
        switch (oper) {
            case '+':
                result = plus(num1, num2);
                System.out.println("덧셈 결과 : " + plus(num1, num2));
                break;

            case '-':
                System.out.println("뺄셈 결과 : " + minus(num1, num2));
                break;

            case '*':
                System.out.println("곱셈 결과 : " + multi(num1, num2));
                break;

            case '/':
                System.out.println("나누기 결과 : " + divi(num1, num2));
                break;

            case '%':
                System.out.println("나머지 결과 :" + remain(num1, num2));
                break;

            default:
                System.out.println("error!!");
        }




    }
}
