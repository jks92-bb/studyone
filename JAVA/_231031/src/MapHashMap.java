import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class MapHashMap {
    public static void main(String[] args) {
        Map<String, String> students = new HashMap<String, String>();

        HashMap<String, String> persons = new HashMap<String, String>();
        students.put("001","이동준");
        students.put("002","이동준");
        students.put("001","이동");
        students.put("탈모여부 ","없음");


        System.out.println(students.get("001"));
        System.out.println(students.get("002"));

        List<HashMap<String,String>>Mystudents = new ArrayList<HashMap<String,String>>();
        mystudents.add(new HashMap<String, String>());

        HashMap<String, String> anotherStudent = new HashMap<String, String>();
        anotherStudent.put("학번", "003");
        anotherStudent.put("이름", "홍길동");
        myStudents.add(anotherStudent);

    }


}
