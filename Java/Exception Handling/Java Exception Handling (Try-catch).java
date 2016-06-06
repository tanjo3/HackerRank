import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);

        try {
            int x, y;
            x = sc.nextInt();
            y = sc.nextInt();

            System.out.println(x / y);
        } catch (InputMismatchException ex) {
            System.out.println(ex.getClass().getName());
        } catch (ArithmeticException ex) {
            System.out.println(ex.toString());
        }
    }
}
