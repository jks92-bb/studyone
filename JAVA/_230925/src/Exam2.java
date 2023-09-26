
import java.util.Scanner;

public class Exam2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
		/*문장을 입력받고 문장에 대한 26개의 알파벳에 대한 각 빈도수를 측정하여 각각 출력하라.
		(대분자 및 소문자를 모두 포함하여 입력받는다고 가정한다.)
		(다만, 한번도 나타나지 않은 알파벳은 출력하지 않도록 한다.)

		ex 입력값 Hello
		<출력 결과>
		e : 1개
		h : 1개
		l : 2개
		o : 1개
		*/
        //1. 문장 입력받기
        String st = scan.nextLine();

        //2. 문장에 포함된 알파벳 각 빈도수 측정.
        // -> 알파벳 빈도 저장하는 배열 별도 선언
        int alpha[] = new int[26]; // C -TYPE 임.
        //int[] alpha = new int[26]; JAVA TYPE.

        for (int i = 0; i < st.length(); i++) {    // 0번 ~(문자열 길이 -1)까지
            // 'A' : 65
            // 'a' : 97
            char ch = st.charAt(i);
            if (ch >= 'A' && ch <= 'Z') { // 대문자인 경우.
                alpha[ch - 'A']++;

            }
            if (st.charAt(i) >= 'a' && st.charAt(i) <= 'z') { // 소문자인 경우.
                alpha[ch - 'a']++;

            }
        }
        for (int i = 0; i < alpha.length; i++) {
            //for (int i = 0,j=65; i <26; i++,j++) {
            // 0인 경우는, 해당 알파벳이 아예 안 나온 경우
            if (alpha[i] > 0) {
                System.out.println((char) (i + 'A') + ":" + alpha[i]);
                //System.out.println((int) (i + 'A') + ":" + alpha[i]);  아스키코드 배열기준으로 나타냄.
                //System.out.println((char)j+":" + alpha[i]);
            }

        }


    }
}




