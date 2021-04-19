import java.io.*;
import java.util.*;
public class Main {
    public static String I, F, key1, key2, key3;
    public static int S;
    public static String[] rule1 , rule2, rule3, SIF;
    public static int l1, l2, l3;
    public static Set<String> visited;
    public static void main(String[] args) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        rule1 = input.readLine().split(" ");
        key1 = rule1[0];
        l1 = rule1[0].length();
        rule2 = input.readLine().split(" ");
        key2 = rule2[0];
        l2 = rule2[0].length();
        rule3 = input.readLine().split(" ");
        SIF = input.readLine().split(" ");
        key3 = rule3[0];
        l3 = rule3[0].length();
        S = Integer.parseInt(SIF[0]);
        I = SIF[1];
        F = SIF[2];
        input.close();
        visited = new HashSet<>();
        ArrayList<String> output = new ArrayList<>();
        output = recursiveSolution(output, I, 0);
        for (int i = S-1; i >=0; i--) System.out.println(output.get(i));
    }
    public static ArrayList<String> recursiveSolution(ArrayList<String> strings, String in, int count)
    {
        if(count > S || visited.contains(in + count)) {
            return strings;
        }
        String t = "";
        if(count == 0) t = in;
        if(count != 0) t = in.split(" ")[2];
        if(t.equals(F) && count == S) {
            strings.add(in);
            return strings;
        }
        ArrayList<String> retArr = new ArrayList<>();
        int size = t.length();
        for (int i = 0; i < size || i < 10; i++) {
            if (i + l1 <= size && size >= l1 && t.substring(i, i + l1).equals(rule1[0])) {
                retArr.add("1 " + (i + 1) + " " + t.substring(0, i) + rule1[1] + t.substring(i + l1));
            }
            if (i + l2 <= size && size >= l2 && t.substring(i, i + l2).equals(rule2[0])) {
                retArr.add("2 " + (i + 1) + " " + t.substring(0, i) + rule2[1] + t.substring(i + l2));
            }
            if (i + l3 <= size && size >= l3 && t.substring(i, i + l3).equals(rule3[0])) {
                retArr.add("3 " + (i + 1) + " " + t.substring(0, i) + rule3[1] + t.substring(i + l3));
            }
        }
        for(String x : retArr){
            if(x.length() > 17){
                continue;
            }
            strings = recursiveSolution(strings, x, count+1);
            if(strings.size() > 0 && strings.toArray()[0].toString().split(" ")[2].equals(F)) {
                strings.add(in);
                return strings;
            }
            else visited.add(x+count);
        }
        visited.add(in + count);
        return strings;
    }
}