import java.util.Scanner;

public class Exam_2sub {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("월을 입력하세요: ");
        int month = scanner.nextInt();
        System.out.print("일을 입력하세요: ");
        int day = scanner.nextInt();

        int totalDays = 0;

        // 각 월별 일수를 직접 일수로 계산하여 합산
        int[] daysInMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        totalDays += day; // 입력된 일수 추가

        for (int i = 1; i < month; i++) {
            totalDays += daysInMonth[i]; // 입력된 월 이전 월들의 일수 합산
        }

        int remainingDays = 365 - totalDays;

        if (remainingDays < 0) {
            System.out.println("올바른 값을 입력하시오.");
        } else {
            System.out.println("연말까지 " + remainingDays + "일 남았습니다.");
        }

        scanner.close();
    }
}
