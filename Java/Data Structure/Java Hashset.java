import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();

        HashSet<String> hs = new HashSet<>();
        for (int t = 0; t < T; t++) {
            hs.add(sc.nextLine());
            System.out.println(hs.size());
        }
    }
}
