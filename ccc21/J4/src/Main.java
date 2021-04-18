import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args)throws IOException
    {
       BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
       String input;
       int swaps = 0;
       ArrayList<String> chars = new ArrayList<>();

       input = String.valueOf(in.readLine());
       Collections.addAll(chars, input.split(""));

       if(!chars.contains("M")) {
           for (int i = 0; i < chars.size(); i++) {
               while(chars.lastIndexOf("L") > chars.indexOf("S")){
                   Collections.swap(chars, chars.lastIndexOf("L"), chars.indexOf("S"));
                   swaps+=1;
               }

           }
       }else{
           for (int i = 0; i < chars.size(); i++) {
               while(chars.lastIndexOf("L") > chars.indexOf("S")){
                   if(chars.lastIndexOf("M") > chars.indexOf("S")){
                       Collections.swap(chars, chars.lastIndexOf("M"), chars.indexOf("S"));
                       swaps+=1;
                   }
                   Collections.swap(chars, chars.lastIndexOf("L"), chars.indexOf("S"));
                   swaps+=1;
               }

           }

       }
       System.out.print(swaps);


    }
}
