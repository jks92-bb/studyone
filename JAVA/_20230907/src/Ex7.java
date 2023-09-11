public class Ex7 {
    public static void main(String[] args) {
        //10를 ten에 기입. 임의의 변수 지정.
        int ten = 10;
        // 지정한 변수가 짝수이면서 양의 정수이면 "2의 배수입니다." 출력
        if (ten > 0 && ((ten % 2) == 0)) {
            System.out.println("2의 배수입니다.");
        }
        // 지정한 변수가 짝수이면서 양의 정수아니면 "2의 배수가 아닙니다." 출력
        else {
            System.out.println("2의 배수가 아닙니다.");
        }

    }
}
