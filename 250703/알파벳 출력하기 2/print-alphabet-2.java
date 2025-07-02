import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();

        int n = Integer.parseInt(st.nextToken());
        char alp = 'A';

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j < i) {
                    sb.append("  ");
                    continue;
                } else {
                    sb.append(alp + " ");
                }

                if (alp == 'Z') {
                    alp = 'A';
                } else {
                    alp++;
                }
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}