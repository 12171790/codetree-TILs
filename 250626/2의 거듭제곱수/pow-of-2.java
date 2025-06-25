import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = 0;

        while(n != 1) {
            n = n / 2;
            x++;
        } 

        System.out.println(x);
    }
}