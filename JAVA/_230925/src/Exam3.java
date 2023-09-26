import java.util.Scanner;

public class Exam3 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String name = scan.next();
        int age = scan.nextInt();
        char blood = scan.next().charAt(0);
        double height = scan.nextDouble();
        String buffer = scan.nextLine(); // 입력 간 충돌을 위해, 엔터 값을 먹여줄.것.
        String intro = scan.nextLine();

        System.out.println("이름 : " + name);
        System.out.println("나이 : ");
        System.out.println("혈액형 : " + blood);
        System.out.println("키 : " + height + "cm");
        System.out.println("자기소개 :" + intro);


    }
}
