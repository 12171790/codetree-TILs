import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int middleScore = sc.nextInt();
        int finalScore = sc.nextInt();

        if (middleScore >= 90) {
            if (finalScore >= 95) {
                System.out.println(100000);
            } else if (finalScore >= 90) {
                System.out.println(50000);
            }
        } else {
            System.out.println(0);
        }
    }
}