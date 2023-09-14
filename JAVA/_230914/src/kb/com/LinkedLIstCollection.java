package kb.com;

import java.util.LinkedList;
import java.util.List;

public class LinkedLIstCollection {
    public static void main(String[] args) {
        List<String> list = new LinkedList<>(); //컬렉션 객체 생성.

        // 컬렉션 객체에 문자열 객체 저장.
        list.add("Toy");
        list.add("Box");
        list.add("Robot");

        // 저장된 문자열 객체의 참조.
        /**
         * size()는 C에서 sizeof 랑 같음.
         * list의 인덱스개수 ,자료개수 확인.
         */
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
        System.out.println();

        // remove 잘 쓰지는 않음.
        list.remove(0); // 첫 번째 객체 삭제. , 0번째 인덱스 삭제.

        // 첫번 째 객체 삭제 후 나머지 객체들 참조.
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }


    }
}




