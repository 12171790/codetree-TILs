import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt = 0;
        int num = 0;

        while(true) {
            num = sc.nextInt();

            if (num % 2 == 0) {
                System.out.println(num / 2);
                cnt++;
            }

            if (cnt >= 3) break;
        }
    }
}