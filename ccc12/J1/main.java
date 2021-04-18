import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int l, s;

        l = input.nextInt();
        input.nextLine();
        s = input.nextInt();

        if(l >= s){
            System.out.print("Congratulations, you are within the speed limit!");
        }else if(s - l> 0 && s - l<=20){
            System.out.print("You are speeding and your fine is $100.");
        } else if(s - l > 20 && s - l <= 30){
            System.out.print("You are speeding and your fine is $270.");
        } else if(s - l >= 31){
            System.out.print("You are speeding and your fine is $500.");
        } 

    }
}