import java.util.Scanner;

public class Exam4_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("초를 입력하세요: ");
        int seconds = scanner.nextInt();

        if (seconds >= 86400) {
            System.out.println("오류: 86400초 이상의 값은 처리할 수 없습니다.");
        } else {
            int hours = getHour(seconds);
            int minutes = getMin(seconds);
            int remainingSeconds = getSec(seconds);

            System.out.println("변환 결과: " + hours + "시간 " + minutes + "분 " + remainingSeconds + "초");
        }

        scanner.close();
    }

    // 초를 시간으로 변환하는 함수
    public static int getHour(int s) {
        return s / 3600;
    }

    // 초를 분으로 변환하는 함수
    public static int getMin(int s) {
        return (s % 3600) / 60;
    }

    // 초를 초로 변환하는 함수 (분으로 환산 불가능한 초 반환)
    public static int getSec(int s) {
        return s % 60;
    }
}
