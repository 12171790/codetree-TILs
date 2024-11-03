import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            String order = sc.next();
            int k = 0;

            switch(order) {
                case "push_back":
                    k = sc.nextInt();
                    arr.add(k);
                    break;
                case "pop_back":
                    arr.remove(arr.size() - 1);
                    break;
                case "size":
                    System.out.println(arr.size());
                    break;
                case "get":
                    k = sc.nextInt();
                    System.out.println(arr.get(k - 1));
                    break;
            }
        }
    }
}