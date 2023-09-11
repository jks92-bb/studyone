public class Ex13 {
    public static void main(String[] args) {
        // 두 개의 양의 정수와 사칙 연산 기호
        // 중 하나를 입력 받아 계산 결과를 출력하는 계산기 프로그램을 작성하시오.
        // int num1 을 선언하고 임의의 정수 저장.
        int num1 = 32;
        //  int num2를 선언하고 임의의 정수 저장.
        int num2 = 13;
        // String oper를 선언하고 임의의 연산자 저장.
        String oper = "-";
        // 만약 oper == "+"라면
        // - num1 + num2 결과 출력.
        if (oper == "+") {
            System.out.println(num1 + num2);
        }
        // 아니고 oper == "-"라면
        // - num1 - num2 결과 출력.
        else if (oper == "-") {
            System.out.println(num1 - num2);
        }
        // 아니고 oper == "*"라면
        // - num1 * num2 결과 출력.
        else if (oper == "*") {
            System.out.println(num1 * num2);
        }
        // 아니고 oper == "/"라면
        // - num1 / num2 결과 출력.
        else if (oper == "/") {
            System.out.println(num1 / num2);
        }
    }
}