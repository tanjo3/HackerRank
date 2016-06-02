import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for (int i = 0; i < t; i++) {
            int a = s.nextInt();
            int b = s.nextInt();
            int n = s.nextInt();

            int e;
            int prev = a;
            for (e = 0; e < n - 1; e++) {
                prev += b << e;
                System.out.print(prev + " ");
            }
            prev += b << e;
            System.out.println(prev);
        }
    }
}
