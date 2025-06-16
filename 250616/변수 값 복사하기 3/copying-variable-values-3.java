import java.io.*;

public class Main {
    public static void main(String[] args) {
        int a = 1;
        int b = 5;
        int c = 3;
        a = c;
        a = a + c;
        b = b - c;
        
        StringBuilder sb = new StringBuilder();

        sb.append(a);
        sb.append("\n");
        sb.append(b);
        sb.append("\n");
        sb.append(c);

        System.out.println(sb.toString());
    }
}