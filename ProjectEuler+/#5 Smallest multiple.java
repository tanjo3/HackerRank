import java.math.BigInteger;
import java.util.*;

public class Solution {

    static BigInteger lcm(BigInteger a, BigInteger b) {
        return a.multiply(b).divide(a.gcd(b));
    }

    static BigInteger smallestMultiple(BigInteger n) {
        if (n.equals(BigInteger.ONE)) {
            return BigInteger.ONE;
        }

        return lcm(n, smallestMultiple(n.subtract(BigInteger.ONE)));
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        long T;
        for (int n = 0; n < N; n++) {
            T = sc.nextLong();
            System.out.println(smallestMultiple(BigInteger.valueOf(T)));
        }
    }
}
