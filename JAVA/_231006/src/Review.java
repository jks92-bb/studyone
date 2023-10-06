// 클래스 : 객체 / 인스턴스를 찍어내는 틀.


class Americano {
    // 멤버 변수 : 물의 양, 원액 양, 얼음 유무
    private int water;
    private int coffee;
    private String ice;    // 얼음 유무


    // 생성자 : " 객체를 생성하는 메소드"
    // 일반 메소드와의 차이점 :
    // 1. 반환형 x
    // 2. 생성자 명 = 클래스명

    public Americano() {
        // 3개의 멤버 변수 초기화
        // 객체를 생성했음을 알림.
        this.water = 500;
        this.coffee = 250;
        this.ice = "있음";
        System.out.println("객체가 성공적으로 생성되었습니다.!");

    }

    // 생성자 추가 구현.
    // 3개의 매개변수 값으로 멤버 초기화.
    public Americano(int w, int c, String i) {
        this.water = w;
        this.coffee = c;
        this.ice = i;

    }

    // 메소드 구현.
    // 1. GoodAme();
    // 물 : 커피 비율이 2:1 이라면 황금비율임을 출력
    // 물이 많다면 연한 아메리카노임을 출력
    // 물이 적다면 진한 아메리카노임을 출력
    public void GoodAme() {
        //if(this.coffee*2= this.water){
        //   System.out.println("황금비율");
        //}
        //else if(this.coffee*2>this.water){
        //System.out.println("진한 아메리카노");
        //}
        //else{
        //  System.out.println("연한 아메리카노");
        //}

        if (this.water / this.coffee == 2 && this.water % this.coffee == 0) {
            System.out.println("황금비율 입니다.");
        } else if (this.water > this.coffee) {
            System.out.println("연한 아메리카노");
        } else if (this.water < this.coffee) {
            System.out.println("진한 아메리카노");
        }

    }


    // 2. Amount();
    // 아메리카노 양이 너무 많다면, 많다고 출력
    // 아메리카노 양이 너무 적다면, 적다고 출력
    // 적당량(750ml) 이라면, 적당하다고 출력.
    public void Amount() {
        int ame = this.coffee + this.water;

        if (ame > 750) {
            System.out.println("아메리카노 양 많습니다.");
        } else if (ame < 750) {
            System.out.println("아메리카노 양 적습니다.");
        } else {
            System.out.println("적당합니다.");
        }

    }

    public void ice(){
        if(this.ice == "있음"){
            System.out.println("아이스아메리카노");
        }
        else {
            System.out.println("뜨거운 아메리카노");
        }
    }


}

public class Review {
    public static void main(String[] args) {
        // 객체 배열
        // 1. 배열로 공간 할당 -> 2. 객체 생성
        Americano americanos[] = new Americano[3];
//        for (int i = 0; i < 1; i++) {
//            americanos[i] = new Americano();
//        }

        americanos[0] = new Americano();    // 비율이 딱 맞고 양이 적당.
        americanos[1] = new Americano(100,200,"있음");    // 진하고 양이 적음.
        americanos[2] = new Americano(500,200,"없음");    // 연하고 양이 적음.

        for(int i =0; i<3; i++){
            americanos[i].Amount();
            americanos[i].GoodAme();
            americanos[i].ice();
            System.out.println();
        }



    }
}
