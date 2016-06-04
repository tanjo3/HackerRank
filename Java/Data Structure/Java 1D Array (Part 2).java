import java.io.*;
import java.util.*;

public class Solution {
    private static boolean visit(int[] arr, boolean[] visited, int index, int m) {
        int n = arr.length;

        if (index < 0 || visited[index] == true) {
            return false;
        } else {
            visited[index] = true;
        }

        if (arr[index] != 0) {
            return false;
        }

        if (index + m >= n || index + 1 >= n) {
            return true;
        }

        return visit(arr, visited, index - 1, m) || visit(arr, visited, index + 1, m) || visit(arr, visited, index + m, m);
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            boolean[] visited = new boolean[n];

            System.out.println(visit(arr, visited, 0, m) ? "YES" : "NO");
        }
    }
}
