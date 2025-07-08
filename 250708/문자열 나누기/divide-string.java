import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());

        StringTokenizer strSt = new StringTokenizer(br.readLine());

        while(strSt.hasMoreTokens()) {
            sb.append(strSt.nextToken());
        }

        if (sb.length() >= 5) {
            for (int i = 5; i < sb.length(); i += 6) {
                sb.insert(i, "\n");
            }
        }

        System.out.println(sb);
    }
}