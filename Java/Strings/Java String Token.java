import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();

        //Complete the code
        s = s.trim();
        if (s.length() > 0) {
            String [] A = s.split("[ !,?.\\_'@]+");
            System.out.println(A.length);

            for (String x : A) {
                System.out.println(x);
            }
        } else {
            System.out.println("0");
        }
    }
}
