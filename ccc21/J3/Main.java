import java.io.*;
import java.util.*;
public class Main {

    public static void main(String[] args)throws IOException
    {
     BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
     ArrayList<String> out = new ArrayList<>();
     String input = "", temp = "", prev = "";
     int x = 0, y = 0;


        for (int i = 0; !input.equals("99999"); i++) {
            input = String.valueOf(in.readLine());
            if(!input.equals("99999")){
            out.add(input);
            }
        }
        for (int i = 0; i < out.size(); i++) {
            temp = out.get(i);
            x = Integer.parseInt(temp.substring(0, 1));
            y = Integer.parseInt(temp.substring(1, 2));
            if((x + y) % 2 == 0 && (x+y) != 0){
                System.out.println("right " + temp.substring(2));
                prev = "right ";
            }else if((x+y) % 2 != 0 && (x+y) != 0){
                System.out.println("left " + temp.substring(2));
                prev = "left ";
            } else if((x+y) == 0){
                System.out.println(prev + temp.substring(2));
            }

        }


    }
}
