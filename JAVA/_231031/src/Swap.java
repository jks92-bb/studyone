public class Swap {

    public static void swap(Value v1, Value v2) {

        int temp = v1.value;
        v1.value = v2.value;
        v2.value = temp;

    }

    public static void main(String[] args) {


        Value v1 = new Value();
        Value v2 = new Value();
        v1.value = 5;
        v2.value = 3;
        swap(v1, v2);
        System.out.println(v1.value);
        System.out.println(v2.value);


    }

}
