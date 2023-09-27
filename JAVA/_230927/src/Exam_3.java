import java.util.Scanner;

public class Exam_3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("숫자를 입력하세요: ");
        int n = scanner.nextInt();

        System.out.println("1부터 " + n + "까지의 소수:");
        for (int i = 2; i <= n; i++) {
            boolean isPrime = true; // 소수 여부를 저장하는 변수

            // 2부터 i의 절반까지의 숫자로 나누어 떨어지는지 확인
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break; // 나누어 떨어지면 소수가 아님
                }
            }

            if (isPrime) {
                System.out.print(i + " "); // 소수 출력
            }
        }


    }
}
