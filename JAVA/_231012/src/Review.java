// 추상클래스 : 덜 구현된 클래스
// 추상클래스 + 다중 상속지원 = 인터페이스

//interface 인터페이스명{
//    멤버선언
//    - 필드: 상수 선언 및 초기화( 변수 x)
//      -> public static "final"[타입 ][상수명] = [값];
//    -- 메소드 : 추상 메소드만 작성   -> 함수를 정의하는 부분 없어야함.
//          abstract 키워드 생략 가능.
//}

//Character 인터페이스 작성
// 메소드 : attack(), minus(int)   ->추상메소드
// => 다른클레스에서 상속받아 재정의(오버라이딩)

import java.util.Scanner;

interface Character {
    abstract public void attack();

    public void minus(int d);
}

class User implements Character {

    private String name;
    private int hp = 100;
    private int mp = 100;
    private int defense;
    private int hit;

    public int getHp() {
        return hp;
    }

    public void setHp(int hp) {
        this.hp = hp;
    }

    public int getMp() {
        return mp;
    }

    public void setMp(int mp) {
        this.mp = mp;
    }

    public int getDefense() {
        return defense;
    }

    public void setDefense(int defense) {
        this.defense = defense;
    }

    public int getHit() {
        return hit;
    }

    public void setHit(int hit) {
        this.hit = hit;
    }


    //attack() => mp  10소모 (상대공격)
    // => 데미지를 줫따는 것을 출력함과 동시에, 남은 user mp를 출력
    @Override
    public void attack() {
        this.mp -= 10;
        System.out.println(this.name + "공격 데미지 들어갔습니다. ");
        System.out.println(this.name + "남은 마나:" + this.mp);


    }

    //minus(int) =-> 매개변수 값의 1/defense 값만큼 hp 감소
    // => 데미지를 받았다는 것을 출력함과 동시에, 남은 user hp 를 출력.
    @Override
    public void minus(int d) {
        this.hp -= d / defense;
        if(this.hp<0){this.hp=0;}
        System.out.println(this.name + "유저가 공격을 받았습니다.");
        System.out.println(this.name + "의 남은 hp는 " + this.hp + "입니다.");


    }

    public User(String n, int h, int d) {
        this.hit = h;
        this.defense = d;
        this.name = n;

    }


}


public class Review {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        //user 1,2 객체 생성.
        System.out.println("유저 1의 정보를 입력하시오. 이름, 공격력 , 방어력 ");
        User user1 = new User(scanner.next(), scanner.nextInt(), scanner.nextInt());
        System.out.println("유저 2의 정보를 입력하시오. 이름, 공격력 , 방어력 ");
        User user2 = new User(scanner.next(), scanner.nextInt(), scanner.nextInt());

        // user1 먼저 공격하며 자동 턴 전환하면서 서로 공격.
        // 전투 진행 중 , 한쪽이 hp가 모두 소모되면 승부 결정.
        // 만약 두 유저 중, 모두 mp가 떨어졌다면, hp가 많은쪽이 승리
        // hp가 같다면 무승부.

        while (user1.getMp() > 0 || user2.getMp() > 0) {
            //user1 턴
            user1.attack();
            user2.minus(user1.getHit());
            System.out.println();

            // user1의 공격으로 user2가 피가 0면 끝.
            if (user2.getHp() <= 0) {
                break;
            }

            // user 2턴
            user2.attack();
            user1.minus(user2.getHit());
            System.out.println();

            // user2의 공격으로 user1가 피가 0면 끝.
            if (user1.getHp() <= 0) {
                break;
            }


        }
        
        // user 전투 결과
        if (user1.getHp() > user2.getHp()) {
            System.out.println("유저 1승리");

        } else if (user2.getHp() > user1.getHp()) {
            System.out.println("유저 2승리");

        } else if (user1.getHp() == user2.getHp()) {
            System.out.println("무승부");

        }


    }


}

