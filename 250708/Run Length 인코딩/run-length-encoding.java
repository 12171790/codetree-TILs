import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st = new StringTokenizer(br.readLine());

        String str = st.nextToken();
        int cnt = 1;

        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                cnt++;
            } else {
                sb.append(str.charAt(i - 1));
                sb.append(String.valueOf(cnt));
                cnt = 1;
            }
        }

        sb.append(str.charAt(str.length() - 1));
        sb.append(String.valueOf(cnt));
        
        System.out.println(sb.length());
        System.out.println(sb.toString());
    }
}