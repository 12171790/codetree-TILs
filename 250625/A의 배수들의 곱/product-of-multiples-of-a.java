import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int prod = 1;
        boolean prodFlag = false;

        for (int i = 1; i <= b; i++) {
            if (i % a == 0) {
                prod = prod * i;
                prodFlag = true;
            }
        }

        if (prodFlag) {
            System.out.println(prod);
        } else {
            System.out.println(0);
        }
    }
}