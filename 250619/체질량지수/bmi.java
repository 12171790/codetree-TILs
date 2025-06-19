import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();

        int b = (int) (w / ((h / 100.0) * (h / 100.0)));

        System.out.println(b);
        if (b >= 25) System.out.println("Obesity");
    }
}