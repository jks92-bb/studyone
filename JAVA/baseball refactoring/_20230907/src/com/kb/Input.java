package com.kb;

import java.util.Scanner;

public class Input {
    public int inputFromUser(String msg, Scanner scanner) {
        System.out.println(msg);
        String str = scanner.nextLine();
        return Integer.parseInt(str);
    }
}
