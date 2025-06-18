import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        String str2 = sc.next();
        int str1Len = str1.length();
        int str2Len = str2.length();

        if (str1Len > str2Len) {
            System.out.println(str1 + " " + str1Len);
        } else if (str2Len > str1Len) {
            System.out.println(str2 + " " + str2Len);
        } else {
            System.out.println("same");
        }
    }
}