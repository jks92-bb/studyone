import java.util.Scanner;


public class Exam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("문장을 입력하세요: ");
        String input = scanner.nextLine();

        // 대소문자 구분 없이 처리하기 위해 모두 소문자로 변환
        input = input.toLowerCase();

        // 알파벳 빈도수를 저장할 배열 초기화
        int[] frequencyArray = new int[26]; // 알파벳 개수만큼 배열 생성

        // 입력된 문장을 문자 하나씩 반복해서 확인
        for (int i = 0; i < input.length(); i++) {
            char c = input.charAt(i);

            // 알파벳인 경우에만 처리
            if (Character.isLetter(c)) {
                int index = c - 'a'; // 알파벳 'a'부터의 인덱스 계산
                frequencyArray[index]++; // 빈도수 증가
            }
        }

        // 결과 출력
        for (int i = 0; i < frequencyArray.length; i++) {
            if (frequencyArray[i] > 0) {
                char letter = (char) ('a' + i); // 인덱스를 알파벳으로 변환
                System.out.println(letter + " : " + frequencyArray[i] + "개");
            }
        }

        scanner.close();
    }
}
