import java.util.Scanner;

//Character 클래스


class Character {
    // 멤버변수 : name(이름), hp(체력)
    private String name;
    private double hp;

    public String getName() {
        return name;
    }

        public double getHp() {
        return hp;
    }



    public Character(String n, double h) {
        this.name = n;
        this.hp = h;
    }

    // 메소드 : Status() -> 각 멤버 변수 자유롭게 출력
    public void Status() {
        System.out.println(this.name);
        System.out.println(this.hp);
    }

    //isOkay() -> "구체화가 필요한 함수입니다." 출력
    public void isOkay() {
        System.out.println("구체화가 필요한 함수입니다.");
    }


}

// npc 클래스


class Npc extends Character {
    private String role;

    // 멤버변수 : name(이름) , hp(체력) , role(역할)
    public Npc(String n, double h, String r) {
        super(n, h);
        this.role = r;


    }


    // 메소드 : Status() -> 각 멤버 변수 자유롭게 출력
    public void Status() {
        System.out.println("이름 :" + super.getName());
        //System.out.println("이름 :" + this.getName());
        //System.out.println("이름 :" + getName());
        System.out.println("체력 : " + super.getHp());
        System.out.println("역할 : " + this.role);
    }

    //  isOkay() -> hp값이 0이라면 "[npc이름]의 hp가 0입니다. 퀘스트를 실패하였습니다. " 출력
    // hp값이 0 초과라면 ,"[npc이름]을 잘 지켜내었습니다. 퀘스트를 성공하였습니다." 출력
    public void isOkay() {
        super.getHp();
        if (getHp() == 0) {
            System.out.println(this.getName() + "의 hp가 0입니다. 퀘스트를 실패하였습니다");

        } else if (getHp() > 0) {
            System.out.println(this.getName() + "를(을) 잘 지켜내었습니다. 퀘스트를 성공하였습니다.");

        }

    }

}


// user 클래스


class User extends Character {
    // 멤버변수 : name (이름), hp(체력), mp(마나), weapon(무기)
    private String weapon;
    private double damage;

    public String getWeapon() {
        return weapon;
    }

    public void setWeapon(String weapon) {
        this.weapon = weapon;
    }

    public double getDamage() {
        return damage;
    }

    public void setDamage(double damage) {
        this.damage = damage;
    }

    private String mp;

    public User(String n, double h, String m, String w) {
        super(n, h);
        this.mp = m;
        this.weapon = w;
    }


    // 메소드 : Status() -> 각 멤버 변수 자유롭게 출력
    public void Status() {
        System.out.println("유저");
        System.out.println("이름 : " + super.getName());
        System.out.println("체력 : " + super.getHp());
        System.out.println("마나 : " + this.mp);
        System.out.println("무기: " + this.weapon);
    }


    //          isOkay() -> hp값이 50이상이라면, "hp 양호합니다. "출력
//                      hp값이 1~49 라면 "hp관리가 필요합니다.보유중인 포션이 있다면 섭취하시실 바랍니다." 출력
//                      hp 값이 0 이라면 "hp가 0이 되었습니다. 근처 마을로 귀환합니다 " 출력
    public void isOkay() {
        // 체력 받아옴.
        super.getHp();
        // 체력과 관련한 출력구문.
        if (getHp() >= 50) {
            System.out.println("hp 양호합니다.");

        } else if (getHp() > 1 && getHp() < 50) {
            System.out.println("hp관리가 필요합니다.보유중인 포션이 있다면 섭취하시실 바랍니다.");


        } else if (getHp() <= 0) {
            System.out.println("hp가 0이 되었습니다. 근처 마을로 귀환합니다.");
        }

    }


    public void selectWeapon() {
        System.out.println("무기 선택");

        if (this.weapon.equals("활")) {
            this.damage = 100;

        } else if (this.weapon.equals("칼")) {
            this.damage = 50;

        } else if (getWeapon().equals("창")) {
            this.damage = 70;
        }
        double remainHp = getHp() - getDamage();
        if (remainHp > 0) {
            System.out.println("체력:" + remainHp + "남았습니다.");
        } else {
            System.out.println("사망하셨습니다.");
        }


    }


}

//몬스터 클래스
class Monster extends Character {
    private double damage;

    public Monster(String n, double h, double d) {
        super(n, h);
        this.damage = d;
    }

    public void Status() {
        System.out.println("몬스터");
        System.out.println("이름 : " + super.getName());
        System.out.println("체력 : " + super.getHp());
        System.out.println("파워: " + this.damage);
    }

    public void isOkay() {
        super.getHp();

        if (getHp() > 0) {
            System.out.println();
        } else if (getHp() <= 0) {
            System.out.println("경험치 500");
        }


    }
}


//main 명령어


public class Ex {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // user 클래스에 대해 hero 객체 생성 (입력받아서 각 멤버 변수 초기화)
        System.out.println("유저에 대한 내용을 적으시오");
        System.out.println("이름, 체력, 마나, 무기");
        User hero = new User(scanner.next(), scanner.nextDouble(), scanner.next(), scanner.next());

        // npc 클래스에 대해 철수 영희 객체 생성(입력받아서 각 멤버변수 초기화)
        // 각 객체에 대해, status 및 isokay 함수 호출하기.
        System.out.println("첫번째 npc에 대한 내용을 적으시오");
        System.out.println("체력 , 역할");
        Npc npc1 = new Npc("철수", scanner.nextDouble(), scanner.next());
        System.out.println("두번째 npc에 대한 내용을 적으시오");
        System.out.println("체력 , 역할");
        Npc npc2 = new Npc("영희", scanner.nextDouble(), scanner.next());

        // hero 객체 메소드 구현
        hero.Status();
        hero.isOkay();
        hero.selectWeapon();
        System.out.println("==================");


        // 철수 객체 메소드 구현
        npc1.Status();
        npc1.isOkay();
        System.out.println("==================");

        //영희 객체 메소드 구현
        npc2.Status();
        npc2.isOkay();

    }


}
