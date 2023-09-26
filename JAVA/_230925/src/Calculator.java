import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String s1 = scan.next();
        String s2 = "abc";
        System.out.println(s1.equals(s2));

        // 2. length()함수 : 문자열 길이/크기를 반환하는 함수
        System.out.println("입력값의 길이:" + s1.length());

        //3. chartAt(i) 함수 : 특정 문자열의 i 번째 요소에 접근/반환하는 함수.
        System.out.println("1번째 요소 :" +s1.charAt(0));
        System.out.println("2번째 요소 :" +s1.charAt(1));
        System.out.println("3번째 요소 :" +s1.charAt(2));

        // toCharArray() 함수 : String -> char형 배열로 변환(값은 그대로.)
        char ch[] = s1.toCharArray();
        System.out.println("1번째 요소 :" + ch[0]);
        System.out.println("2번째 요소 :" + ch[1]);
        System.out.println("3번째 요소 :" + ch[2]);

    }
}
