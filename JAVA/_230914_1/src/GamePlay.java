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
        String answerCount = myInput.inputFromuser(MSG_INPUT_ANSWER_COUNT, scanner);
        setting.setAnswerCount(Integer.parseInt(answerCount));
        String inputLimit = myInput.inputFromuser(MSG_INPUT_LIMIT, scanner);
        setting.setInputLimit(Integer.parseInt(inputLimit));


        // 겜 완료 했나 안했나 플래그 세워놓음. false 일단 지금 안했기에.
        // 플래그 많이 사용하는 건 좋지 않음.
        // 하나 두개 정도는 사용가능. 안에서 해결 못했을 경우 밖에서 사용함.플래그.
        boolean gameComplete = false;
        BaseballGame data = new BaseballGame();
        data.initSetting(setting);

        // 정답 3개
        data.setAnswers();


        //9번 반복
        for (int i = 0; i < setting.getInputLimit(); i++) {
            // 카운트 판단을 위한 변수 초기화

            // 입력 3개
            // int question1을 선언하고 입력 받아 저장
            data.setQues1(Integer.parseInt(myInput.inputFromuser(MSG_FIRST_INPUT, scanner)));

            // int question2을 선언하고 입력 받아 저장
            int question2 = Integer.parseInt(myInput.inputFromuser(MSG_SECOND_INPUT, scanner));
            data.setQues2(question2);

            // int question3을 선언하고 입력 받아 저장
            String input3 = myInput.inputFromuser(MSG_THIRD_INPUT, scanner);
            data.setQues3(Integer.parseInt(input3));

            // 스트라이크, 볼 판별
            gameComplete = data.isValidAnswer();
            if (gameComplete) {
                break;
            }
        }
        // 결과 출력.
        if (gameComplete) {
            System.out.println(MSG_fourd_INPUT);
        } else {
            System.out.println("정답 :" + data.getAns1() + "," + data.getAns2() + "," + data.getAns3());
        }
    }


}
