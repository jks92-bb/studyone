public class Ex8 {
    public static void main(String[] args) {
        //임의의 양의 정수가 3의 배수이면 "3의 배수입니다." 4의 배수이면 "4의 배수입니다"출력 , 둘다 아니면 "알 수 없습니다." 출력.
        int num = 12;

        //임의의 양의 정수가 3과 4의  배수이면 "3과 4의 배수입니다." 출력
        if (num > 0 && (num % 3) == 0 && (num % 4) == 0) {
            System.out.println("3과 4의 배수입니다.");
        }
        //임의의 양의 정수가 3의 배수이면 "3의 배수입니다." 출력
        else if (num > 0 && (num % 3) == 0) {
            System.out.println("3의 배수입니다.");
        }
        //임의의 양의 정수가 4의 배수이면  "4의 배수입니다." 출력
        else if (num > 0 && (num % 4) == 0) {
            System.out.println("4의 배수입니다.");
        }
        //임의의 양의 정수가 3과 4의 배수 둘다 아니면 "알 수 없습니다." 출력.
        else {
            System.out.println("알 수 없습니다.");
        }
    }
}
