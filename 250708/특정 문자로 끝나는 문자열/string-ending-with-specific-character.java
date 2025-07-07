import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        ArrayList<String> arr = new ArrayList<>();

        for (int i = 0; i < 10; i++) {
            arr.add(new StringTokenizer(br.readLine()).nextToken());
        }
        char ch = new StringTokenizer(br.readLine()).nextToken().charAt(0);
    
        for (int i = 0; i < arr.size(); i++) {
            String str = arr.get(i);
            if (str.charAt(str.length() - 1) == ch) {
                sb.append(str + "\n");
            }
        }

        if (sb.length() == 0) {
            System.out.println("None");
        } else {
            System.out.println(sb.toString());
        }
        
    }
}