package com.kb;

import java.util.Scanner;

public class Input {
    public String inputFromUser(String msg, Scanner scanner) {
        System.out.println(msg);
        String str = scanner.nextLine();
        return str;
    }
}
