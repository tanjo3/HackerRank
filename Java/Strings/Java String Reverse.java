import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();

        /* Enter your code here. Print output to STDOUT. */
        boolean flag = true;
        int start = 0;
        int end = A.length() - 1;

        while (start < end) {
            if (A.charAt(start) != A.charAt(end)) {
                flag = false;
                break;
            }

            start++;
            end--;
        }

        System.out.println(flag ? "Yes" : "No");
    }
}
