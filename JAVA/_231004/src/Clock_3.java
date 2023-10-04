import java.util.Scanner;
public class Clock_3 {
    // Clok_3에 대한 객체 생성함과 동시에
    //3개의 멤버 변수들이 모두 0으로 초기화한다.
    private int hour=0;
    private int minute=0;
    private int second=0;

    //get, set 함수

    public int getHour() {
        return hour;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public int getMinute() {
        return minute;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public int getSecond() {
        return second;
    }

    public void setSecond(int second) {
        this.second = second;
    }

    public void printTime(){
        System.out.println("현재 시각은 "+this.hour+"시"+this.minute+"분"+this.second+"초");
    }
    public String Ampm(){
        if(this.hour>=0 && this.hour<12){
            return "오전";
        }
        else{
           return "오후";
        }
    }



    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // clock클래스를 통해 c1, c2 객체 각각 생성.
        Clock_3 c1 = new Clock_3();
        Clock_3 c2 = new Clock_3();

        // 3개의 입력을 받아 c2 초기화.
        System.out.print("현재 시각을 입력하시오.( hour,minute, second");
        c2.setHour(scanner.nextInt());  //int 형 입력-> 함수실행
        c2.setMinute(scanner.nextInt());
        c2.setSecond(scanner.nextInt());

        // c1,c2 객체에 대한 printTime , Ampm실행
        c1.printTime();
        System.out.println( c1.Ampm() );


        c2.printTime();
        System.out.println( c2.Ampm() );



    }
}
