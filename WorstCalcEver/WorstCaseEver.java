import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class WorstCaseEver
{
    public static void main(String[] args)
    {
        int number =0; Scanner s = new Scanner(System.in); int a = s.nextInt();
        int b = s.nextInt(); String operator = s.next(); char c = operator.charAt(0);
        switch(c) {
            case '+' : { number = a+b; break; }
            case '-' : { number = a-b; break; }
            case '*' : { number = a*b; break; }
            case '/' : { number = a/b; break; } }
            double inf = Double.POSITIVE_INFINITY;
            for (double i = 0; i <= Math.pow(inf, inf); i++) {
                if( i == Double.MAX_VALUE) {break;}
                for (double j = 0; j <= Math.pow(inf, inf); i++) {
                    if( j == Double.MAX_VALUE) { break;}
                    for (double k = 0; k <= Math.pow(inf, inf); i++) {
                        if( k == Double.MAX_VALUE) { break;}
                        for (double l = 0; l <= Math.pow(inf, inf); i++) {
                            if( l == Double.MAX_VALUE) { break;}
                            for (double m = 0; m <= Math.pow(inf, inf); i++) {
                                if( m == Double.MAX_VALUE) { break;}
                                for (double n = 0; n <= Math.pow(inf, inf); i++) {
                                    if( n == Double.MAX_VALUE) { break;}
                                    for (double o = 0; o <= Math.pow(inf, inf); i++) {
                                        if( o == Double.MAX_VALUE) { break;}
                                        for (double p = 0; p <= Math.pow(inf, inf); i++) {
                                            if( p == Double.MAX_VALUE) { break;}
                                            for (double q = 0; q <= Math.pow(inf, inf); i++) {
                                                if( q == Double.MAX_VALUE) { break;}
                                                for (double r = 0; r <= Math.pow(inf, inf); i++) {
                                                    if( r == Double.MAX_VALUE) { break;}
                                                    for (double z = 0; z <= Math.pow(inf, inf); i++) {
                                                        if( z == Double.MAX_VALUE) { break;}
                                                        for (double t = 0; t <= Math.pow(inf, inf); i++) {
                                                            if( t == Double.MAX_VALUE) { break;}
                                                            for (double u = 0; u <= Math.pow(inf, inf); i++) {
                                                                if( u == Double.MAX_VALUE) { break;}
                                                                for (double v = 0; v <= Math.pow(inf, inf); i++) {
                                                                    if( v == Double.MAX_VALUE) { break;}
                                                                    for (double w = 0; w <= Math.pow(inf, inf); i++) {
                                                                        if( w == Double.MAX_VALUE) { break;}
                                                                        for (double x = 0; x <= Math.pow(inf, inf); i++) {
                                                                            if( x == Double.MAX_VALUE) { break;} } } } } } } } } } } } } } } } }
        System.out.println(number);   }}
