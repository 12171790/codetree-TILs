import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i + 1; j++) {
                sb.append("*");
            }
            sb.append("\n\n");
        }

        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < i + 1; j++) {
                sb.append("*");
            }
            sb.append("\n\n");
        }

        System.out.println(sb);
    }
}