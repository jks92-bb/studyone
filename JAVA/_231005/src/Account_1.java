import  java.util.Scanner;
//Account 클래스 구현
class Account1 {
    //멤버 변수
    private String acc_num;
    private String id;
    private String password;

    // 메소드 : get /set
    public String getAcc_num() {
        return acc_num;
    }

    public void setAcc_num(String acc_num) {
        this.acc_num = acc_num;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    //print 3개 멤버 변수 값 출력
    public void Print() {
        System.out.println("회원 번호 : " + this.acc_num);
        System.out.println("아 이 디 : " + this.id);
        System.out.println("비밀 번호 : " + this.password);
    }

    //changePw (String) : 매개변수 값으로 password 값 변경
    // 다만 매개변수 값이 5자리 넘기지 않으면 에러메시지 출력.
    public void changePw(String pw) {
        if (pw.length() < 5) {
            // 에러 메시지 출력
            System.out.println("error");
        } else { // 비밀번호 변경 수행.
            this.password = pw;
            System.out.println("변경 완료");

        }
    }

    // 생성자 : 메소드(멤버함수) 중 일부
    // 생성자 : 1. 회원번호 초기화값.
    // 생성자 오버로딩 적용중
    public Account1() {
        this.acc_num = "0000";
        this.id = "ex";
        this.password = "0000";
    }

    // 생성자 : 2. 3개의 멤버 변수 , 매개변수 통해 초기화.
    public Account1(String a, String i, String p) {
        this.acc_num = a;
        this.id = i;
        this.password = p;
    }

}

public class Account_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 배열 선언 manager 객체 생성
        Account1 manager[] = new Account1[3];

        // manager 초기화 된 값.
        for (int i = 0; i < 3; i++) {
            manager[i] = new Account1();
        }


        //  2. manager[3]id, password 값 코드 상에서 임의로 수정

        for (int i = 0; i < 3; i++) {
            if (i == 0) {

                manager[0].setId("123");
                manager[0].setPassword("123");

            } else if (i == 1) {

                manager[1].setId("123");
                manager[1].setPassword("11e23");

            } else {

                manager[2].setId("123");
                manager[2].setPassword("12g!%$3");

            }

            //  3. manager[3] 순차적으로 정보 출력
            manager[i].Print();
            System.out.println();
        }

        //  4.user 객체 생성 (main 에서 입력받아서 초기화)
        System.out.println("정보를 입력 하시오");
        String num = scanner.next();
        String id = scanner.next();
        String password = scanner.next();
        Account1 user = new Account1(num,id, password);

        //  5. user 정보 순차적으로 출력
        user.Print();

        //  6. user 객체에 대해 changePw(String) 수행
        System.out.println("수정할 비밀번호를 입력해주세요");
        user.changePw(scanner.next());
        user.Print();



    }
}
