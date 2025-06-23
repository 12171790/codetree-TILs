import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int num = 1;
        
        while(num * 3 <= n) {
            System.out.print((num++ * 3) + " ");
        } 
    }
}