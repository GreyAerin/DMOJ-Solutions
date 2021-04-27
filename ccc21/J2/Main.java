import java.io.*;
public class Main {

    public static void main(String[] args)throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int highBid = 0, tempBid = 0, count = 0;
        String name = "", hibidName = "";

        count = Integer.parseInt(in.readLine());

        for (int i = 0; i < count; i++) {
            name = String.valueOf(in.readLine());
            tempBid = Integer.parseInt(in.readLine());

            if(tempBid > highBid)
            {
                highBid = tempBid;
                hibidName = name;
            }
        }
        System.out.print(hibidName);

    }
}
