public class Clock_1 {

    // cue;
    private int hour;
    private int minute;
    private int second;

    public Clock_1() {
        this(0, 0, 0);
    }

    public Clock_1(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public void setTime(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public String printTime() {
        return String.format("%02d:%02d:%02d", hour, minute, second);
    }

    public boolean isAm() {
        if (hour >= 0 && hour < 12) {
            return true;
        } else {
            return false;
        }
    }

    public boolean isPm() {
        if (hour >= 12) {
            return true;
        } else {
            return false;
        }
    }

    public String amPm() {
        if (isAm()) {
            return "오전";
        } else {
            return "오후";
        }
    }

    public static void main(String[] args) {
        Clock_1 c1 = new Clock_1();
        System.out.println("현재 시각 : " + c1.amPm() +" "+ c1.printTime() );


        Clock_1 c2 = new Clock_1(12, 30, 45);
        System.out.println("현재 시각 : " + c2.printTime()+ c2.amPm());

    }
}
