import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        String min = "{";
        String max = "0";

        Scanner s = new Scanner(System.in);
        String input = s.nextLine();
        int len = s.nextInt();

        for (int start = 0; start < input.length() - len + 1; start++) {
            String temp = input.substring(start, start + len);
            if (temp.compareTo(min) < 0) {
                min = temp;
            }
            if (temp.compareTo(max) > 0) {
                max = temp;
            }
        }

        System.out.println(min);
        System.out.println(max);
    }
}
