import java.io.*;
import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b, c, d;

        a = input.nextInt();
        input.nextLine();
        b = input.nextInt();
        input.nextLine();
        c = input.nextInt();
        input.nextLine();
        d = input.nextInt();

        if (a == b && b == c && c == d) {
            System.out.print("Fish At Constant Depth");
        } else if (a < b && b < c && c < d) {
            System.out.print("Fish Rising");
        } else if (a > b && b > c && c > d) {
            System.out.print("Fish Diving");
        } else {
            System.out.print("No Fish");
        }
        input.close();
    }
}