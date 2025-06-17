import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());

        sb.append(String.valueOf(a) + " ");
        sb.append(String.valueOf(b) + " ");
        sb.append(String.valueOf(a + b));

        System.out.println(sb);
    }
}