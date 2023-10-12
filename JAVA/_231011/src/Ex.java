import java.util.Scanner;

// 캐릭터 인터페이스
interface Character {

    // 메소드 :attack()
    public void attack();

    // 메소드 : minus(int)
    public void minus(int m);

}

class User implements Character {

    // 멤버 변수 :hp(체력)
    private int hp = 100;

    // 멤버 변수 :mp(마나)
    private int mp = 100;

    // 멤버 변수 : 공격력(hit)
    private int hit;

    // 멤버 변수 : 방어력(defense)
    private int defense;

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

    public int getHit() {
        return hit;
    }

    public void setHit(int hit) {
        this.hit = hit;
    }

    public int getDefense() {
        return defense;
    }

    public void setDefense(int defense) {
        this.defense = defense;
    }

    public User(int h, int d) {

        hit = h;
        defense = d;


    }


    @Override
    public void attack() {
        this.mp -= 10;
        System.out.println(this.hit + "만큼 데미지가 들어갔습니다." + "남은 마나:" + this.mp);
    }

    public void minus(int m) {

        // (1/this.defense) => 했을시 안되는 이유는 몫으로 남기 때문에 0 으로 hp가 계속 100으로 나타나게 됌.
        //this.hp -= m*(1 / this.defense);
        this.hp -= m / this.defense;

        if (this.hp >= 0) {
            System.out.println(m + "만큼 데미지 피해를 입었습니다." + "남은 HP:" + this.hp);
        } else {
            System.out.println(m + "만큼 데미지 피해를 입었습니다." + "남은 HP:" + 0);

        }

    }


}


public class Ex {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // user 1,2 의 객체 생성
        System.out.println("유저1의 정보를 입력하시오. 공격력, 방어력");
        User user1 = new User(scanner.nextInt(), scanner.nextInt());
        System.out.println("유저2의 정보를 입력하시오. 공격력, 방어력");
        User user2 = new User(scanner.nextInt(), scanner.nextInt());


        int turn = 1; // 유저1의 턴
        //boolean playerTurn = true; // 유저 턴
        while (user1.getHp() > 0 && user2.getHp() > 0 && user1.getMp() > 0 || user2.getMp() > 0) {


            //방법 2
            if (turn == 1) {
                System.out.printf("유저 1 :");
                user1.attack();
                System.out.printf("유저 2: ");
                user2.minus(user1.getHit());
                System.out.println();
                turn = 2;   // 유저 2턴으로 교체
            } else {

                System.out.printf("유저 2 :");
                user2.attack();
                System.out.printf("유저 1 :");
                user1.minus(user2.getHit());
                System.out.println();
                turn = 1;    // 유저 1턴으로 교체
            }

//              방법1
//            if (playerTurn) {
//                System.out.printf("유저 1 :");
//                user1.attack();
//                System.out.printf("유저 2: ");
//                user2.minus(user1.getHit());
//                System.out.println();
//
//
//            } else {
//                System.out.printf("유저 2 :");
//                user2.attack();
//                System.out.printf("유저 1 :");
//                user1.minus(user2.getHit());
//                System.out.println();
//            }
//
//            //턴 체인지
//            playerTurn = !playerTurn;

        }
        if (user1.getHp() > user2.getHp()) {
            System.out.println("유저 1승리");

        } else if (user2.getHp() > user1.getHp()) {
            System.out.println("유저 2승리");

        } else if (user1.getHp() == user2.getHp()) {
            System.out.println("무승부");

        }


    }
}
