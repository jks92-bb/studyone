import java.util.Scanner;


public class Exam_1 {
    public static int GetDaily(int m, int d) {

        int remain = 0;
        //월 입력 시 월별 날짜 적립.
        for (int i = 1; i < m; i++) {

            if (i == 2) {
                remain += 28;
            } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                remain += 30;
            } else {
                remain += 31;
            }
        }
        // 더한 월 일수에 일자 더함.
        remain += d;
        return 365 - remain;
    }


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int month = scanner.nextInt();
        int day = scanner.nextInt();

        System.out.println("연말까지 " + GetDaily(month, day) + "일 남았습니다.");


        // 오늘 날짜 (월, 일)을 입력받고 이번 해가 끝나기까지 몇 일이 남았는지 출력하기.
        // iain 에서 입출력 수행하기.
        // getDaily 함수 ->월, 일 정보를 통해 연말까지 며 일 남았는지 반환하는 함수 수현
        // 출력형식은 자유롭게, 결과값만 잘나오면 됌.
    }
}
