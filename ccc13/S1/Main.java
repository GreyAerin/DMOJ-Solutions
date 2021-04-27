package ogus.bram;
import java.io.*;
import java.util.*;
public class Main {

    public static void main(String[] args)throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int y;
        String s = "";

        y = Integer.parseInt(input.readLine());
        digCheck(y);

    }

    private static void digCheck(int y) {
        ArrayList<Integer> count = new ArrayList<>(9);
        Collections.fill(count, 1);
        int x, o;
        o = y+1;
        while (o > 0){
            x = o % 10;
            count.set(x, (count.get(x))+1);
            o = o/10;
        }
        if(count.contains(2) || count.contains(3) || count.contains(4)){
            digCheck(y+1);
        }else{
            System.out.print(y+1);
        }

    }

}
