import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Absolutely
{
    public static void main(String[] args)
    {
        int wings = 0;
        if(wings % 7 == 0 || wings % 11 == 0) {
            System.out.println("Yes");
        } else if((wings - 18) % 7 == 0) {
            System.out.println("Yes");
        } else if(((wings - 18) % 11 == 0) {
            System.out.println("Yes");
        } else if(wings % 18 == 0) {
            System.out.println("Yes");
        }
    }
}
