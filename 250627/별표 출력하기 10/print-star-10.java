import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < 2 * n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < (i / 2) + 1; j++) {
                    sb.append("* ");
                }
            } else {
                for (int j = 0; j < n - (i / 2); j++) {
                    sb.append("* ");
                }
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}