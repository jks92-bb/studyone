import com.kb.BusinessMan;
import com.kb.Man;

public class Operation {
    public static void main(String[] args) {
        BusinessMan businessMan = new BusinessMan("경북","학생", "민욱");

        //Man man = new BusinessMan("경북","학생","민욱");
        //man.tellYourName();

        businessMan.tellYourinfo();
        }
    }
