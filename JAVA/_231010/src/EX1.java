
    // 추상 클래스
    abstract class Shape1 {
        // 추상 메서드
        public abstract double area();

        // 일반 메서드
        public void display() {
            System.out.println("This is a shape.");
        }
    }

    // 추상 클래스를 상속받는 하위 클래스
    class Circle1 extends Shape1 {
        private double radius;

        public Circle1(double radius) {
            this.radius = radius;
        }

        // 추상 메서드의 구현
        @Override
        public double area() {
            return Math.PI * radius * radius;
        }
    }

    public class EX1 {
        public static void main(String[] args) {



            // 추상 클래스의 인스턴스를 생성할 수 없음
            // Shape shape = new Shape(); // 에러 발생

            // 하위 클래스의 인스턴스 생성
            Circle1 circle = new Circle1(5.0);

            // 추상 클래스의 메서드 호출
            circle.display(); // This is a shape.

            // 추상 메서드의 구현된 메서드 호출
            double circleArea = circle.area();
            System.out.println("Circle area: " + circleArea);
        }
    }

