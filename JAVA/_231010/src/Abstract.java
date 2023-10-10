// 추상 클래스 : "추상적인" = "구체적이지 않은"
// => 정의가 덜 된 클래스
// => abstract class 키워드 사용해서 구현
// => "추상 메소드를 하나 이상은 가지고 있어야한다."
abstract class Shape {   // 도형 클래스
    // 추상 메소드 : 정의가 덜 된 메소드
    // => abstract 키워드 사용해서 구현
    // 함수의 선언부만 남고, 정의부는 없는 형태
    abstract public void WhatShape();


}

// 추상 클래스 응용하는 방법 -> 하위 클래스를 통해 "구체화" (오버라이딩)
class Circle extends Shape{
    // 추상 클래스 Shape 상속 -> 추상 메소드 WhatShape() 반드시 구현해야함.
    // => 오버라이딩
    public void WhatShape(){
        // 상위 클래스 멤버인 추상메소드 whatshape() 구체화.
        System.out.println("해당 객체는 원입니다.");
    }

}
class Rectangle extends Shape{
    @Override
    public void WhatShape() {
        System.out.println("해당 객체는 사각형입니다.");
    }
}


public class Abstract {
    public static void main(String[] args) {
        //Shape = s new Shape(); // 에러 o, 추상클래스로 객체 생성x

        Circle c = new Circle();
        Rectangle r = new Rectangle();

        c.WhatShape();
        r.WhatShape();




    }
}
