import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        str = str.substring(0, 4) + str.substring(9, str.length()) + str.substring(3, 8);

        System.out.println(str);
    }
}