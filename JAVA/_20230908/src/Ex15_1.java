import java.util.Random;
import java.util.Scanner;

public class Ex15_1 {
    public static void main(String[] args) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);

        //게임에서 사용할 변수.
        int num1, num2, num3;
        int chance1, chance2, chance3;
        int randomCnt = 0; //난수 생성 카운드
        int gameCnt = 0; // 게임 카운트
        int strikeCnt = 0; // 스트라이크 카운트
        int ballCnt = 0; // 볼 카운트

        // 게임 전체 반복
        while (true) {
            //중복되지 않는 3개의 난수 생성.
            while (true) {
                // 난수 생성 확인.
                randomCnt++;
                //1~9사이의 난수생성
                num1 = ((int) ((Math.random() * 9 + 1)));
                // math.random 0이상 1미만의 무작위 부동 소수점 생성 메서드
                // 0.0 이상 1.0미만의 숫자 중에서 무작위로 선택.
                // *9 는 생성 난수 9로 곱한다. 그러므로 0.0 이상 9.0 미만의 부동 소주점 숫자 중에서 무작위 선택.
                // +1 을 하여 1.0 이상 10.0미만의 숫자로 조정.
                // (int)는 이 결과를 정수로 변환.
                num2 = random.nextInt(9) + 1;
                // 0부터 8까지의 난수 생성. nextInt()는 주어진 범위 내에서 무작위 정수 생성.
                // 그러면 0~8이고 여기서 +1하여 1~9로 조정.
                num3 = ((int) ((Math.random() * 9 + 1)));
                if ((num1 != num2 && num2 != num3 && num3 != num1)) {
                    //중복되지 않는 난수 생성에 성공시 루프 탈출.
                    break;
                }
            }// while end

            // 난수 확인.
            System.out.println(randomCnt + "회 :" + num1 + "" + num2 + "" + num3);

            while (true) {
                //3개의 정수 받기.
                System.out.println("3개의 정수를 입력하시오");
                chance1 = scanner.nextInt();
                chance2 = scanner.nextInt();
                chance3 = scanner.nextInt();

                // 게임카운트 1회 증가.
                gameCnt++;

                // 스트라이크(숫자와 위치까지 일치할때)
                if (num1 == chance1) strikeCnt++;
                if (num2 == chance2) strikeCnt++;
                if (num3 == chance3) strikeCnt++;

                // 볼 ( 숫자는 일치하나 위치가 다를 때)
                if (num1 == chance2 || num1 == chance3) ballCnt++;
                if (num2 == chance1 || num2 == chance3) ballCnt++;
                if (num3 == chance1 || num3 == chance2) ballCnt++;

                //게임 종료
                if (strikeCnt == 3) {
                    System.out.println("3스트라이크 게임종료");
                    System.out.println(gameCnt + "번 시도하여 맞추셨습니다.");
                    break; //탈출
                } else {
                    //하나도 못 맞추는 경구
                    if (strikeCnt == 0 && ballCnt == 0) {
                        System.out.println("아웃입니다.");
                    } else {
                        System.out.printf("%d 스트라이크, %d 볼 \n", strikeCnt, ballCnt);
                    }
                    //스트라이크, 볼 카운트 초기화.
                    strikeCnt = 0;
                    ballCnt = 0;
                }
            } //while end

            System.out.println("게임 더 하시겠습니까?");

            System.out.println("0: 종료 1: 재시작");

            int restart = scanner.nextInt();
            if (restart == 0) {
                //게임종료
                System.out.println("\n== 게임종료");
            } else if (restart == 1) {
                strikeCnt = 0;
                ballCnt = 0;
                gameCnt = 0;
                System.out.println("\n== 게임 재시작==\n");
            }
        } // 게임 전체 반복 while end
    } //main 끝
} // class 종료
