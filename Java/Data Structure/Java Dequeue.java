import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();

        ArrayDeque<Integer> deque = new ArrayDeque<>(m);
        int[] unique = new int[10000001];
        int num, maxUnique, numUnique = 0;

        for (int i = 0; i < m; i++) {
            num = in.nextInt();

            deque.add(num);
            if (unique[num]++ == 0) {
                numUnique++;
            }
        }

        maxUnique = numUnique;
        for (int i = m; i < n; i++) {
            num = deque.remove();
            if (--unique[num] == 0) {
                numUnique--;
            }

            num = in.nextInt();

            deque.add(num);
            if (unique[num]++ == 0) {
                numUnique++;
            }

            if (numUnique > maxUnique) {
                maxUnique = numUnique;
            }
        }

        System.out.println(maxUnique);
    }
}
