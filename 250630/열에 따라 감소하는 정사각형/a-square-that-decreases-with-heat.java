import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StringBuilder sb = new StringBuilder();

        for (int j = 0; j < n; j++) {
            for (int i = n; i > 0; i--) {
                sb.append(i);
                sb.append(" ");
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}