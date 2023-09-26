
import java.util.Scanner;

public class Exam1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("문장을 입력하세요: ");
        String input = scanner.nextLine();

        // 대소문자 구분 없이 처리하기 위해 모두 소문자로 변환
        input = input.toLowerCase();

        // 알파벳 문자마다 빈도수 출력
        for (char c = 'a'; c <= 'z'; c++) {
            int count = 0; // 각 알파벳 문자의 빈도수 초기화

            //  input.length(); 문자열 input의 길이를 얻는다.
            // 입력된 문장을 문자 하나씩 반복해서 확인
            for (int i = 0; i < input.length(); i++) {
                // 문자열 내에서 i번째 위치에 있는 문자를 얻는다.
                char currentChar = input.charAt(i);

                // 현재 문자가 현재 알파벳 문자와 같으면 빈도수 증가
                if (currentChar == c) {
                    count++;
                }
            }

            // 빈도수가 0이 아닌 경우에만 출력
            if (count > 0) {
                System.out.println(c + " : " + count + "개");
            }
        }

        scanner.close();
    }
}

