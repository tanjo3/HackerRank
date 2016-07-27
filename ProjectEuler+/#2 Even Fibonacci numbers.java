import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int T;
        T = in.nextInt();

        long N;
        long prev, cur, next, sum;
        for (int t = 0; t < T; t++) {
            N = in.nextLong();

            prev = 2L;
            cur = 8L;
            sum = prev + cur;

            next = 4L * cur + prev;
            while (next < N) {
                prev = cur;
                cur = next;
                sum += cur;

                next = 4L * cur + prev;
            }

            System.out.println(sum);
        }
    }
}
