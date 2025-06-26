import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0) {
                    sb.append("*");
                } else {
                    if (j % 2 == 1 && j >= i) {
                        sb.append("*");
                    } else {
                        sb.append(" ");
                    }
                }
                sb.append(" ");
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}