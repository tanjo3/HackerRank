import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();

        for (int i = 1; i <= 10; i++) {
            System.out.printf("%d x %d = %d", N, i, N * i);
        }
    }
}
