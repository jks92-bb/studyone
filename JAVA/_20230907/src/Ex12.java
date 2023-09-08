public class Ex12 {
    public static void main(String[] args) {
        // 임의의 두 정수를 비교하여 첫 번째 정수가 두 번쨰 정수보다 크고 짝수이면
        // "안녕하세요"를 출력하는 프로그램
        // 임의의 주 정수를 int 형 변수에 기입.
        int num1 = 4;
        int num2 = 2;

        // 임의의 두 정수를 비교하여 첫 번째 정수가 두 번쨰 정수보다 크고 짝수이면
        // "안녕하세요"를 출력하는 if구문.
        if (num1>num2 && num1 % 2 == 0) {// 만약 num1>num2 && num1 % 2 == 0 라면
            System.out.println("안녕하세요"); // - 안녕하세요 출력.
        }
    }
}
