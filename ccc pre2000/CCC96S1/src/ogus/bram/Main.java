package ogus.bram;
import java.io.*;
import java.util.*;
public class Main {

    public static void main(String[] args)throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int s, t, sum;
        ArrayList<Integer> factors = new ArrayList<>();
        ArrayList<Integer> numbers = new ArrayList<>();
        s = Integer.parseInt(input.readLine());

        for (int i = 0; i < s; i++) {
            t = Integer.parseInt(input.readLine());
            numbers.add(t);
        }

        for (int i = 0; i < numbers.size(); i++) {
            t = numbers.get(i);
            for (int j = 1; j < t; j++) {
                if (t % j == 0) {
                    factors.add(j);
                }
            }
            sum = 0;
            for (int j = 0; j < factors.size(); j++) {
                sum += factors.get(j);
            }
            factors.removeAll(factors);
            if (sum > t) {
                System.out.print(t + " is an abundant number.\n");
            } else if (sum < t) {
                System.out.print(t + " is a deficient number.\n");
            } else if (sum == t) {
                System.out.print(t + " is a perfect number.\n");
            }
        }
    }
}
