import java.awt.desktop.SystemEventListener;
import java.util.Scanner;

public class Ex15 {
    public static void main(String[] args) {
        //임의의 정수 3개를 기억하고 정수의 순서와 숫자를 맞추는 야구 게임을 만드시오.
        // 자리와 숫자가 같으면 스트라이크 정답 숫자만 있다면 볼입니다.
        // 단, 정답 입력 기회는 10회로 설정하시오.(예 : 3, 5, 7 이 정답이라면 5,3, 7은 1스트라이크 2볼)
        // 입력 받기 위한 객체선언
        // 임의 정수 3개를 랜덤화 선언작업.
        int randomvalue;
        randomvalue = ((int)((Math.random()*9+1)));
        System.out.println(randomvalue); //-> 디버깅용 임의정수 랜덤.
        int randomvalue2;
        randomvalue2 = ((int)((Math.random()*9+1)));
        System.out.println(randomvalue2); //-> 디버깅용 임의정수 랜덤.
        int randomvalue3;
        randomvalue3 = ((int)((Math.random()*9+1)));
        System.out.println(randomvalue3); //-> 디버깅용 임의정수 랜덤.

        Scanner scanner = new Scanner(System.in);
        // 야구게임 임의의 3개의 정수 답을 변수에 기입한다.
        int num = 1;
        int num2 = 2;
        int num3 = 3;

        // 맞출 임의의 정수 3개를 입력 받는다.
        System.out.println("숫자 입력");
        String str = scanner.nextLine();
        String str2 = scanner.nextLine();
        String str3 = scanner.nextLine();
        int input = Integer.parseInt(str);
        int input2 = Integer.parseInt(str2);
        int input3 = Integer.parseInt(str3);




    }
}
