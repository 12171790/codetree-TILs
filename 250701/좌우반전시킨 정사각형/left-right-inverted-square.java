import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StringBuilder sb = new StringBuilder();

        for (int i = 1; i <= n; i++) {
            for (int j = n * i; j >= i; j = j - i) {
                sb.append(j);
                sb.append(" ");
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}