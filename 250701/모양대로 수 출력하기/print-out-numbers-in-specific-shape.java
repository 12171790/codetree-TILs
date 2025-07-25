import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        int n = sc.nextInt();

        for (int i = n; i >= 1; i--) {
            for (int j = n; j >= 1; j--) {
                if (j <= i) {
                    sb.append(j);
                } else {
                    sb.append(" ");
                }
                sb.append(" ");
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}