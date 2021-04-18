import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int p = 0, b = 0;

        b = Integer.parseInt(in.readLine());

        p = (5 * b) - 400;

        if (p < 100) {
            System.out.println(p);
            System.out.print(1);
        } else if (p > 100) {
            System.out.println(p);
            System.out.print(-1);
        } else {
            System.out.println(p);
            System.out.print(0);
        }

    }

}
