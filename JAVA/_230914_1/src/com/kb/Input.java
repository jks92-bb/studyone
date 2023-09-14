package com.kb;

import java.util.Scanner;

public class Input {
    //
    public int inputFromuser(String msg, Scanner scanner) {

        System.out.println(msg);
        String str = scanner.nextLine();
        //int question1 = Integer.parseInt(str);
        return Integer.parseInt(str);


    }
}
