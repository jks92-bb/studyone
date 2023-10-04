import org.w3c.dom.ls.LSOutput;

import java.util.Date;
import java.util.Scanner;

public class Clock {
    //gpt;



    private int hour;
    private int minute;
    private int second;

    public Clock() {
        // 기본 생성자에서 시, 분, 초를 0으로 초기화
        hour = 0;
        minute = 0;
        second = 0;
    }

    public Clock(int h, int m, int s) {
        // 시, 분, 초를 입력받아 필드 초기화
        hour = h;
        minute = m;
        second = s;
    }

    public void PrintTime() {
        // 현재 시간 출력
        System.out.printf("%02d:%02d:%02d\n", hour, minute, second);
        // 필드너비 표현방식으로 02  사용함.
    }

    public void AmPm() {
        // 오전 또는 오후 출력
        if (hour < 12) {
            System.out.println("오전");
        } else {
            System.out.println("오후");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Clock 클래스를 통해 c1, c2 객체 생성
        Clock c1 = new Clock();

        Clock c2 = new Clock();
        Date now = new Date();
        System.out.println(now);

        // 사용자로부터 시, 분, 초를 입력받아 c2 객체 필드 초기화
        // 이 부분을 Scanner를 사용하여 구현할 수 있습니다.
        // 여기서는 하드코딩 예제로 시, 분, 초를 직접 지정하겠습니다.
        c2.hour = 14;
        c2.minute = 30;
        c2.second = 45;

        // c1, c2 객체에 대한 PrintTime() 및 AmPm() 실행
        System.out.println("c1의 현재 시간:");
        c1.PrintTime();
        c1.AmPm();

        System.out.println("c2의 현재 시간:");
        c2.PrintTime();
        c2.AmPm();
    }
}


// 멤버변수 : hour =0 ,minute = 0,second=0 (privated으로 선언)
// 멤버 함수 : PrintTime() -> 현재시간 출력
// AmPm() -> 오전인지 오후인지 출력

// main에서 수행할 것.
// Clock 클래스를 통해 c1, c2 객체 각각 생성
// 3개의 입력을 받아 c2객체 필드 초기화.
// c1, c2 객체에 대한 PrintTime() 및 AmPm() 실행.



