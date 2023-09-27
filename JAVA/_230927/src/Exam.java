import java.util.Scanner;

public class Exam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
//        숫자 n을 입력받고 1부터 n까지 숫자 중 짝수만 추려내어 출력하고
//        짝수들끼리의 합을 출력하도록 하여라
        int n = scanner.nextInt();

        int sum = 0;
        System.out.println("1부터 " + n + "까지의 짝수 :");
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                System.out.println(i + "");
                sum += i;
            }
        }
        System.out.println("\n짝수합 : " + sum);
    }
}

