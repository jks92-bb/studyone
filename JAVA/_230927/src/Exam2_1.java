import java.util.Scanner;

public class Exam2_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 숫자 n을 입력받고
        // 1부터 n까지의 숫자 중 소수만 추려내어 출력하라.

        // 1. n 입력받기.
        int n = sc.nextInt();

        // 1 부터 n까지 숫자 탐색
        for (int i = 2; i <= n; i++) {   // i는 1부터 까지 순회
            // 2~ (n-1)범위에서는 약수가 없어야 한다.
            int count = 0;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) { // j 가 i의 소수가 아님.
                    count++;
                }
            }
            // count 값이 0을 유지하지 못한다면, 소수가 아니다.
            // count 값이 0을 유지하면, 소수라고 할 수 있음.
            if(count==0){
                //소수출력
                System.out.println(i);
            }
        }
    }
}
