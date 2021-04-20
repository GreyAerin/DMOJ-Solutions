import java.io.*;
import java.util.*;
public class Main {

    public static void main(String[] args) throws IOException{
        String s;
        int n;

        String[] split;
        ArrayList<String> output = new ArrayList<>();
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(input.readLine());
        for (int i = 0; i < n; i++) {
            s = input.readLine();
            split = s.split(" ");
            StringBuffer str = new StringBuffer();
            for (int j = 0; j < split.length; j++) {
                if(split[j].length() == 4){
                    split[j] = "****";
                }
                str.append(split[j]).append(" ");
            }
            output.add(str.toString());
        }
        for (int i = 0; i < output.size() ; i++) {
            System.out.println(output.get(i));
        }
    }
}
