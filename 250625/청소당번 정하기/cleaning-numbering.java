import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int countClass = 0, countHall = 0, countToilet = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 12 == 0) {
                countToilet++;
            } else if (i % 3 == 0) {
                countHall++;
            } else if (i % 2 == 0) {
                countClass++;
            }
        }

        System.out.println(countClass + " " + countHall + " " + countToilet);
    }
}