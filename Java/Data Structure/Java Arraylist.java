import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ArrayList[] lines = new ArrayList[n];
        for (int i = 0; i < n; i++) {
            int d = sc.nextInt();

            ArrayList<Integer> al = new ArrayList<>(d);
            for (int j = 0; j < d; j++) {
                al.add(sc.nextInt());
            }
            lines[i] = al;
        }

        int q = sc.nextInt();
        for (int i = 0; i < q; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            if (x-- > lines.length || y-- > lines[x].size()) {
                System.out.println("ERROR!");
            } else {
                System.out.println(lines[x].get(y));
            }
        }
    }
}
