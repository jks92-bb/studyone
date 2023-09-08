import java.util.Scanner;

public class Ex14 {
    public static void main(String[] args) {
        // 임의의 정수를 입력 받아 입력 받은 정수의 모든 약수를 출력하는 프로그램을 작성.
        int num = 6;
        // 입력 받기 위한 객체 선언
        Scanner scanner = new Scanner(System.in);

        // int input을 선언하고 입력받아 저장한다.
        System.out.println("숫자입력 : ");
        String str = scanner.nextLine();
        int input = Integer.parseInt(str);

        for (int i = 1; i <= input; i++) { // i는 1부터 input까지 반복
            if (input % i == 0) { // - 만약 input % i == 0
                System.out.println(i);   // - 출력 i
            }
        }
    }
}
