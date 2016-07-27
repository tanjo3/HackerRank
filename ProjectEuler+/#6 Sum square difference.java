import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        long T;
        for (int n = 0; n < N; n++) {
            T = sc.nextLong();
            System.out.println((T * T * (T + 1L) * (T + 1L) >> 2L) - (T * (T + 1L) * ((T << 1L) + 1L) / 6L));
        }
    }
}
