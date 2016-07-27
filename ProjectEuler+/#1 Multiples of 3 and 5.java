import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int T, N;
        T = in.nextInt();

        long lim3, lim5, lim15;
        long sum3, sum5, sum15;
        for (int t = 0; t < T; t++) {
            N = in.nextInt();

            lim3 = (long) Math.ceil(N / 3.0) - 1L;
            lim5 = (long) Math.ceil(N / 5.0) - 1L;
            lim15 = (long) Math.ceil(N / 15.0) - 1L;

            sum3 = (lim3 * (lim3 + 1)) >> 1L;
            sum5 = (lim5 * (lim5 + 1)) >> 1L;
            sum15 = (lim15 * (lim15 + 1)) >> 1L;

            System.out.println(3L * sum3 + 5L * sum5 - 15L * sum15);
        }
    }
}
