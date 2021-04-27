import java.io.*;
import java.util.Arrays;
import java.util.Collections;

public class Main {

    public static void main (String[] args) throws IOException{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int m =0, n=0, k=0, a= 0, count = 0;
        String[] thing;
        String input;

        m = Integer.parseInt(in.readLine());
        n = Integer.parseInt(in.readLine());

        String[][] canvas = new String[m][n];
        for (int i = 0; i < canvas.length; i++) {
            Arrays.fill(canvas[i], "B");
        }

        k = Integer.parseInt(in.readLine());
        for (int i = 0; i < k; i++) {
            input = String.valueOf(in.readLine());
            thing = input.split(" ");
            a = Integer.parseInt(thing[1]);
            if(thing[0].equals("R")){
                for (int j = 0; j < canvas[0].length; j++) {
                    if(canvas[(a-1)][j].equals("B")) {
                        canvas[(a - 1)][j] = "G";
                    }else{
                        canvas[(a-1)][j] = "B";
                    }
                }
            }else{
                for (int j = 0; j < canvas.length; j++) {
                    if(canvas[j][(a-1)].equals("B")) {
                        canvas[j][(a-1)] = "G";
                    }else{
                        canvas[j][(a-1)] = "B";
                    }
                }
            }

        }


        for (int i = 0; i < canvas.length; i++) {
            count += Collections.frequency(Arrays.asList(canvas), "G");
        }
        System.out.println(count);




    }
}
