import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
         StringTokenizer st = new StringTokenizer(br.readLine());

         int a = Integer.parseInt(st.nextToken());
         StringTokenizer st1 = new StringTokenizer(br.readLine());

         int[] arr = new int[4];
         for (int i = 0; i < arr.length; i++) {
            arr[i] = Integer.parseInt(st1.nextToken());
         }

         for (int i = 0; i < arr.length; i++) {
            if (a > arr[i]) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
         }
    }
}