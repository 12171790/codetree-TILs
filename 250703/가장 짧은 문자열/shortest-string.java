import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        //ArrayList<String> arr = new ArrayList<>();
        ArrayList<Integer> arr = new ArrayList<>();

        for (int i = 0; i < 3; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            arr.add((st.nextToken()).length());
        }

        int max = arr.get(0), min = arr.get(0);

        for (int i = 1; i < 3; i++) {
            if (arr.get(i) > max) {
                max = arr.get(i);
            }

            if (arr.get(i) < min) {
                min = arr.get(i);
            }
        }

        System.out.println(max - min);
    }
}