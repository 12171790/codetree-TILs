import java.util.*;

public class Main {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        
        for (int i = 1; i <= 19; i++) {
            for (int j = 1; j <= 19; j++) {
                sb.append(i + " * " + j + " = " + (i * j));

                if (j % 2 == 0 || j == 19) {
                    sb.append("\n");
                } else {
                    sb.append(" / ");
                }
            }
        }

        System.out.println(sb);
    }
}