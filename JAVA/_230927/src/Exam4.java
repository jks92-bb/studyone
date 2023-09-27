import java.util.Scanner;

public class Exam4 {
    // 입력값으로 주어지는 sec(초) 정보를
    // h시 m분 s초로 출력하게끔 코드를 작성하여라.
    // 다만, 아래의 함수를 용도에 맞게 구현하고 적절히사용.
    //(입력과 출력 모두 main에서 수행.)
    //(86400초 이상의 값에 대해선 오류 메시지 출력)


    // - getHour(int s) : 초 정보를 받고 , 시 정보를 반환.
    // - getMin(int s) : 초 정보를 받고, 분 정보를 반환.
    // - getSec(int s) : 분으로 환산 불가능한 초 정보 반환.

    public static int getHour(int s) {// 초를 시간으로 변환하는 함수
        return s / 3600;
    }

    public static int getMin(int s) { // 초를 분으로 변환하는 함수
        return (s % 3600) / 60;
    }

    public static int getSec(int s) { // 나머지 초를 초로 변환하는 함수
        return s % 60;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int sec = scanner.nextInt();
        if (sec >= 86400) {
            System.out.println("86400이상으로 불가합니다.");
        } else {
            int hours = getHour(sec);       // 시간
            int min = getMin(sec);          // 분
            int remainsec = getSec(sec);    // 나머지 초

            System.out.println("결과:" + hours + "시간" + min + "분" + remainsec + "초");

        }

    }

}
