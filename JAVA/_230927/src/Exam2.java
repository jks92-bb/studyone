import java.util.Scanner;

public class Exam2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 숫자 n을 입력받고
        // 1부터 n까지의 숫자 중 소수만 추려내어 출력하라.
        System.out.println("숫자입력");
        int n = scanner.nextInt();

        System.out.println("1부터 " + n + "까지의 소수:");
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) { // 소수인 경우
                System.out.println(i + " "); // 소수 출력
            }
        }

    }

    // 소수인지 확인하는 메서드
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }

        // 2부터 num - 1까지의 숫자로 나누어 떨어지는지 확인
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false; // 나누어 떨어지면 소수가 아님
            }
        }
        return true; // 나누어 떨어지지 않으면 소수임
    }
}