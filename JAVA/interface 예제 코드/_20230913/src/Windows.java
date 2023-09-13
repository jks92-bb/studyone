import com.kb.*;

public class Windows {
    public static void main(String[] args) {
        String select = "samsung";

        PrintDriver driver;

        if (select.equals("samsung")) {
            driver = new SamsungPrintDriver();
        } else if (select.equals("cannon")) {
            driver = new CannonPrintDriver();
        } else if (select.equals("brother")) {
            driver = new BrotherPrintDriver();
        } else {
            driver = new EtcPrintDriver();
        }

        driver.print();
    }
}
