import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        int n = 0;

        for (int i = 0; i < 21; i++) {
            n =  a / b;
            sb.append(String.valueOf(n));
            if (i == 0) sb.append(".");
            a = (a % b) * 10;
        }

        System.out.println(sb);
    }
}