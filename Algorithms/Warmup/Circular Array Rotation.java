import com.landawn.abacus.util.N;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int q = sc.nextInt();

        int[] array = new int[n];
        for (int nn = 0; nn < n; nn++) {
            array[nn] = sc.nextInt();
        }

        N.rotate(array, k);

        for (int qq = 0; qq < q; qq++) {
            System.out.println(array[sc.nextInt()]);
        }
    }
}