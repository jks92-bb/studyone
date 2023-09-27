import java.util.Scanner;

public class Exam_ {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
//        숫자 n을 입력받고 1부터 n까지 숫자 중 짝수만 추려내어 출력하고
//        짝수들끼리의 합을 출력하도록 하여라
        //1. n입력받기
        int n = scanner.nextInt();

        //2. 1부터 n까지의 숫자 순회 -> 짝수 추려내기
        int sum = 0;    // 합 지정.
        System.out.println("1부터 " + n + "까지의 짝수 :");
        for (int i = 1; i <= n; i++) {      // i는 1~n 까지의 순회
            if (i % 2 == 0) {               // 2로 나누어서 떨어지면 출력하기 위한 조건
                System.out.println(i + "");
                sum += i;
            }
        }
        System.out.println("\n짝수합 : " + sum);
    }
}

