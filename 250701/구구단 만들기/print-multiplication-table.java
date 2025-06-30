import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        int a = sc.nextInt();
        int b = sc.nextInt();

        for (int i = 1; i <= 9; i++) {
            for (int j = b; j >= a; j -= 2) {
                sb.append(j + " * " + i + " = " + (j * i));

                if (j != a) sb.append(" / ");
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}