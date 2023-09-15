package com.kb;

import java.util.List;

public class BaseballGame {
//    private int ques1;
//    private int ques2;
//    private int ques3;

    private List<Integer> questions;
    private List<Integer> answers;

    private Setting setting;

//    private int ans1;
//    private int ans2;
//    private int ans3;

    public void initSetting(Setting setting) {
        this.setting = setting;
    }

    public void setAnswers() {
        for (int i = 0; i < this.setting.getAnswerCount(); i++) {
            int answer = ((int) (Math.random() * 8)) + 1;
            if (i != 0) {
                while(true) {
                    for (Integer setAnswer : this.answers) {
                        if (setAnswer != answer) {

                        }
                    }
                }
            }
            answers.add(answer);
        }
    }

    public boolean isValidAnswer() {
        int strike = 0;
        int ball = 0;
        // 스트라이크, 볼 판별
        // 만약 this.ques1 == this.ans1이라면
        // - strike++
        // 아니라면
        // - 만약 this.ques1 == answer2 || this.ques1 == this.ans3 이라면
        // -- ball++
        if (this.ques1 == this.ans1) {
            strike++;
        } else if (this.ques1 == this.ans2 || this.ques1 == this.ans3) {
            ball++;
        }

        // 만약 this.ques2 == this.ans2이라면
        // - strike++
        // 아니라면
        // - 만약 this.ques2 == this.ans1 || this.ques2 == this.ans3 이라면
        // -- ball++
        if (this.ques2 == this.ans2) {
            strike++;
        } else if (this.ques2 == this.ans1 || this.ques2 == this.ans3) {
            ball++;
        }

        // 만약 this.ques3 == this.ans3이라면
        // - strike++
        // 아니라면
        // - 만약 this.ques3 == this.ans1 || this.ques3 == this.ans2 이라면
        // -- ball++
        if (this.ques3 == this.ans3) {
            strike++;
        } else if (this.ques3 == this.ans1 || this.ques3 == this.ans2) {
            ball++;
        }

        System.out.println("스트라이크 : " + strike);
        System.out.println("볼 : " + ball);

        return strike == 3 ? true : false;
    }


}
