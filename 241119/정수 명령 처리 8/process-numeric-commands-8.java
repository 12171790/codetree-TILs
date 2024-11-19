import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LinkedList<Integer> s = new LinkedList<>();
        int n = 0;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            String str = "";
            int num = 0;

            str = sc.next();
            switch(str) {
                case "push_front": 
                            num = sc.nextInt();
                            s.addFirst(num);
                            break;
                case "push_back":
                            num = sc.nextInt();
                            s.addLast(num);
                            break;
                case "pop_front":
                            System.out.println(s.pollFirst());
                            break;
                case "pop_back":
                            System.out.println(s.pollLast());
                            break;
                case "size":
                            System.out.println(s.size());
                            break;
                case "empty":
                            System.out.println(s.isEmpty() == true ? 1 : 0);
                            break;
                case "front":
                            System.out.println(s.peekFirst());
                            break;
                case "back":
                            System.out.println(s.peekLast());
                            break;
            }
        }
    }
}