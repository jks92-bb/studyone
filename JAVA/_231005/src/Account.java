import java.util.Scanner;

class Custmomer {
    Scanner scanner = new Scanner(System.in);
    private int acc_num;
    private String id;
    private String password;

    // 회원 번호 getter 및 setter
    public int getAcc_num() {
        return acc_num;
    }

    public void setAcc_num(int acc_num) {
        this.acc_num = acc_num;
    }

    // 아이디 getter 및 setter
    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    // 비밀번호 getter 및 setter
    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    // 회원 정보 출력 메서드
    public void Print() {

        System.out.println("회원 번호 : " + this.acc_num);
        System.out.println("아 이 디 : " + this.id);
        System.out.println("비밀 번호 : " + this.password);
    }

    // 비밀번호 변경 메서드
    public void ChangePw(String p) {
        this.password = p;
        while (true) {
            if (password.length() <= 5) {
                System.out.println("글자 크기가 5자리 이하입니다. 늘려주십시오.");
                password = scanner.next();
            } else if (password.length() > 5) {
                break;
            }
        }
        System.out.println("비밀 번호 변경완료");


    }

    // 생성자
    public Custmomer(int acc, String u, String p) {
        this.acc_num = acc;
        this.id = u;
        this.password = p;
    }

    public Custmomer() {
        this.acc_num = 0000;
        this.id = "user";
        this.password = "0000";
    }


}


public class Account {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 배열선언 manager 객체 생성
        Custmomer manager[] = new Custmomer[3];

        // manager 초기화.
        for (int i = 0; i < 3; i++) {
            manager[i] = new Custmomer();
        }


        for (int i = 0; i < 3; i++) {


            System.out.println("회원 정보를 입력하세요 (번호 아이디 비밀번호):");
            System.out.println(i + 1 + "번째");
            int a = scanner.nextInt();
            String u = scanner.next();
            String p = scanner.next();
            manager[i] = new Custmomer(a, u, p);


        }

        // user 정보 입력
        System.out.println("사용자 정보를 입력하세요 (번호 아이디 비밀번호):");
        Custmomer user = new Custmomer(scanner.nextInt(), scanner.next(), scanner.next());

        // user 비밀번호 변경
        System.out.println("비밀 번호 변경하시오");
        user.ChangePw(scanner.next());

        // 매니저 정보 출력 & 유저 정보 출력
        System.out.println("--------매니저 정보---------");
        for (int i = 0; i < 3; i++) {
            System.out.println(i + 1 + "번째");
            manager[i].Print();
            System.out.println();
        }
        System.out.println("------user정보--------");
        user.Print();
        System.out.println();


    }
}
