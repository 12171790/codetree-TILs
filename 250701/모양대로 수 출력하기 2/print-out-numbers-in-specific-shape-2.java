import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();

        int n = Integer.parseInt(st.nextToken());
        int cnt = 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (cnt > 8) {
                    cnt = 2;
                }
                sb.append(cnt);
                sb.append(" ");
                cnt += 2;
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}