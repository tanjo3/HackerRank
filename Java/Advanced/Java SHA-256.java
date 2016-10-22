import java.math.BigInteger;
import java.security.MessageDigest;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        String S = in.nextLine();

        byte[] hash = MessageDigest.getInstance("SHA-256").digest(S.getBytes("UTF-8"));
        System.out.format("%064x", new BigInteger(1, hash));
    }
}

