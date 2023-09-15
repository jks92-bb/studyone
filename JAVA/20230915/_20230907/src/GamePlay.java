import com.kb.BaseballGame;
import com.kb.Input;
import com.kb.Setting;

import java.util.Scanner;

import static com.kb.Constants.*;

public class GamePlay {
    public static void main(String[] args) {
        // 입력
        // 입력받기 위한 객체 선언
        Scanner scanner = new Scanner(System.in);
        Input myInput = new Input();


        Setting setting = new Setting();
        String answerCount = myInput.inputFromUser(MSG_INPUT_ANSWER_COUNT, scanner);
        setting.setAnswerCount(Integer.parseInt(answerCount));

        String inputLimit = myInput.inputFromUser(MSG_INPUT_LIMIT, scanner);
        setting.setInputLimit(Integer.parseInt(inputLimit));


        boolean gameComplete = false;

        BaseballGame data = new BaseballGame();
        data.initSetting(setting);

        // 정답 3개
        data.setAnswers();


        // 9번 반복
        for (int i = 0; i < setting.getInputLimit(); i++) {
            // 입력 3개
            // int question1을 선언하고 입력 받아 저장
            String input1 = myInput.inputFromUser(MSG_FIRST_INPUT, scanner);
            data.setQues1(Integer.parseInt(input1));

            // int question2을 선언하고 입력 받아 저장
            int question2 = Integer.parseInt(myInput.inputFromUser(MSG_SECOND_INPUT, scanner));
            data.setQues2(question2);

            // int question3을 선언하고 입력 받아 저장
            int question3 = Integer.parseInt(myInput.inputFromUser(MSG_THIRD_INPUT, scanner));
            data.setQues3(question3);

            // 스트라이크, 볼 판별
            gameComplete = data.isValidAnswer();
            if (gameComplete) {
                break;
            }
        }

        // 결과 출력
        // strike, ball 출력
        if (gameComplete) {
            System.out.println("정답입니다.");
        } else  {
            System.out.println("정답 : " + data.getAns1() + ", " + data.getAns2() + ", " + data.getAns3());
        }
    }
}








