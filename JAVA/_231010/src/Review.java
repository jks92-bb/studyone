
class Coffee{
    // 멤버 변수 :  name, ml
    private  String name; // 커피 이름
    private int ml;       // 커피 정량

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getMl() {
        return ml;
    }

    public void setMl(int ml) {
        this.ml = ml;
    }

    public void Print(){
        System.out.println("Coffee 클래스 print");
        System.out.println("커피 이름 : "+this.name);
        System.out.println("커피  정량 : "+this.ml+"ml");

    }



}

class Latte extends Coffee{
    // 멤버 변수 : name, ml, milk

    private int milk;   // 우유 투입량

    public int getMilk() {
        return milk;
    }

    public void setMilk(int milk) {
        this.milk = milk;
    }

    // 오버라이딩 : 상위 클래스에 있는 함수 내용을, 하위 클래스에서 재정의(덮어쓰기)
    public void Print(){
        System.out.println("Latte 클래스 print");
        System.out.println("커피 이름 : "+this.getName());
        System.out.println("커피 정량 : "+this.getMl());
        System.out.println("우유 투입량  : "+ this.milk);

    }









}


public class Review {
    public static void main(String[] args) {
        Coffee coffee = new Coffee();
        Latte latte = new Latte();

        // coffee 객체에 대해서 멤버 변수값 설정 -> set 함수 수행.
        coffee.setName("아메리카노");
        coffee.setMl(500);

        // latte 객체에 대해서 멤버 변수 값 설정
        latte.setName("카페라떼");
        latte.setMilk(200);
        latte.setMl(500);

        coffee.Print();
        System.out.println();
        latte.Print();




    }
}
