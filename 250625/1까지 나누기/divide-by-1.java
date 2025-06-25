import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 1, cnt = 0;

        while(n > 1) {
            n = n / i++;
            cnt++;
        }
        System.out.println(cnt);
    }
}