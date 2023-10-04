
import java.util.Scanner;

public class Exam_1sub {
    public static int GetDaily(int m, int d) {
        int daysInMonth;

        // 월에 따라 한 달의 날짜 수를 설정
        switch (m) {
            case 4:
            case 6:
            case 9:
            case 11:
                daysInMonth = 30;
                break;
            case 2:
                daysInMonth = 28; // 간단하게 2월을 28일로 처리
                break;
            default:
                daysInMonth = 31;
                break;
        }

        // 입력받은 월과 일을 기준으로 이번 달의 남은 날 수 계산
        int remainingDaysInThisMonth = daysInMonth - d;

        // 연말까지의 전체 남은 날 수 계산
        int remainingDaysUntilEndOfYear = 0;
        for (int i = m + 1; i <= 12; i++) {
            switch (i) {
                case 4:
                case 6:
                case 9:
                case 11:
                    remainingDaysUntilEndOfYear += 30;
                    break;
                case 2:
                    remainingDaysUntilEndOfYear += 28; // 2월을 28일로 처리
                    break;
                default:
                    remainingDaysUntilEndOfYear += 31;
                    break;
            }
        }

        return remainingDaysInThisMonth + remainingDaysUntilEndOfYear;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("월을 입력하세요: ");
        int month = scanner.nextInt();
        System.out.print("일을 입력하세요: ");
        int day = scanner.nextInt();

        int remainingDays = GetDaily(month, day);
        System.out.println("연말까지 " + remainingDays + "일 남았습니다.");

        scanner.close();
    }
}
