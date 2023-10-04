import java.util.Scanner;

public class Review {
    // 함수 : "명령문들의 집합"
    //public static 반환형 함수명(매개변수타입 매개변수명, ...){
    //  명령문들;
    //}
    public static void Print(int h, int m) {
        // 0 ~6 시 : "취침중임 " 출력
        if (h >= 0 && h <= 6 ) {
            System.out.println("취침 중입니다.");
        } else if (h>6 && h < 9 ) {
            System.out.println("출근하세요.");
        } else if (h >= 9 && h < 18) {
            System.out.println("근무중");
        } else if (h >= 18) {
            System.out.println("칼퇴");
        }
    }


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // 하루 시간(시,분)을 입력받고, 현재 진행중인 일과를 출력하기
        // 오전 9시 이전 : "출근하세요." 출력
        // 9 ~18 시 : "근무중" 출력
        // 18시 이후 : "칼퇴" 출력


        // 1. 하루 시간 입력받기
        int hour = scanner.nextInt();   // 시간 정보
        int min = scanner.nextInt();    // 분 정보

        // 현재 진행중인 일과 출력하기 -> 함수로 구현해서 출력.
        Print(hour,min);





    }
}
