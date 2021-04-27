import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;

public class Revised {

    public static void main(String[] args) throws IOException {

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int m , n , k , a , count = 0;
        String[] thing;

        m = Integer.parseInt(in.readLine());
        n = Integer.parseInt(in.readLine());
        int[] rows = new int[2000000];
        int[] cols = new int[2000000];
        Arrays.fill(rows, 0);
        Arrays.fill(cols, 0);
        k = Integer.parseInt(in.readLine());
        for (int i = 0; i < k; i++) {
            thing = in.readLine().split(" ");
            a = Integer.parseInt(thing[1]);
            if (thing[0].equals("R")) {
              rows[a] +=1;
            } else {
              cols[a] +=1;
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j< n; j++){
                if(rows[i+1] % 2 == 1 && cols[j+1] % 2 == 0){
                   count++;
                }else if(rows[i+1] % 2 == 0 && cols[j+1] % 2 == 1){
                    count++;
                }
            }
        }
        System.out.println(count);


    }
}
