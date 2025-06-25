import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = 0, sum = 0;
        for (int i = 0; i < 5; i++) {
            num = sc.nextInt();

            if (num % 3 == 0) {
                sum += 1;
            }
        }

        if (sum == 5) {
            System.out.println(1);
        } else {
            System.out.println(0);
        }

    }
}