import java.util.*;
import java.math.BigDecimal;

class Solution {
    public static void main(String[] args) {
        //Input
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] s = new String[n];
        for (int i = 0; i < n; i++) {
            s[i] = sc.next();
        }

        //Write your code here
        Arrays.sort(s, (String a, String b) -> new BigDecimal(b).compareTo(new BigDecimal(a)));

        //Output
        for (int i = 0; i < n; i++) {
            System.out.println(s[i]);
        }
    }
}
