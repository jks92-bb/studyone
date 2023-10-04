import java.util.Scanner;

public class Clock_2 {
    private int hour;
    private int minute;
    private int second;

    public Clock_2() {
        hour = 0;
        minute = 0;
        second = 0;
    }
    public Clock_2(int h, int m,int s){
        hour = h;
        minute = m;
        second =s;

    }

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

    public void PrintTime(){
        System.out.printf("%02d:%02d:%02d\n", this.hour, this.minute, this.second);
        System.out.println(this.hour+"시"+this.minute+"분"+this.second+"초");

    }
    public void Ampm(){
        if(this.hour>=12){
            System.out.println("오후");
        }
        else{
            System.out.println("오전");
        }

    }



    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Clock_2 c1 = new Clock_2();
        Clock_2 c2 = new Clock_2();

//        int h = scanner.nextInt();
//        int m = scanner.nextInt();
//        int s = scanner.nextInt();

        c2.setHour(scanner.nextInt());
        c2.setMinute(scanner.nextInt());
        c2.setSecond(scanner.nextInt());

        c1.PrintTime();
        c1.Ampm();

        c2.PrintTime();
        c2.Ampm();


    }
}
