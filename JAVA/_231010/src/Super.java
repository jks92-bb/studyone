import java.util.Scanner;

class Computer {
    //멤버 변수 : name(기종) , company(제조회사)
    private String name;
    private String company;

    // 생성자 선언부 : "computer 생성자 실행 " 출력 + 멤버 변수 초기화
    public Computer(String n, String c) {
        System.out.println("computer 생성자 실행");
        this.name = n;
        this.company = c;

    }


}

// 하위 클래스에서 객체 생성 시,
// 상위 클래스의 생성자를 우선 실행한 후에 하위 클래스 생성자 실행
class NoteBook extends Computer {
    // 멤버 변수 : name(기종) , company(제조 회사), weight(무게), angle(꺾이는 각도)


    private double weight;
    private int angle;

    // 생성자 선언부 -> 상위 클래스 필수로 불러와야함.
    // super() : 상위 클래스의 생성자 호출.
    // "notebook 생성자 실행" 출력 + 멤버 변수 초기화.
    // super()는 하위 클래스 생성자 정의 시, "반드시 첫번째 줄에 작성해야 한다"
    public NoteBook(String n, String c, double w, int a) {
        super(n, c);
        // 매개변수 n과 c의 정보를 전송하면서,
        // computer(string, string)이 수행되고 있음.
        this.weight = w;
        this.angle = a;
        System.out.println("NoteBook 생성자 실행");


    }
    // this : "이 객체"
    // super.[상위클래스 멤버명] : "이 객체의 상위 클래스 멤버 접근"


}


public class Super {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Computer computer = new Computer(scanner.next(), scanner.next());

        NoteBook noteBook = new NoteBook(scanner.next(), scanner.next(),
                scanner.nextDouble(), scanner.nextInt());


    }
}
