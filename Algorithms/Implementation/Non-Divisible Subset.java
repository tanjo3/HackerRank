import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();

        int temp;
        TreeMap<Integer, Integer> modCounts = new TreeMap<>();
        for (int n = 0; n < N; n++) {
            temp = sc.nextInt() % K;

            if (!modCounts.containsKey(temp)) {
                modCounts.put(temp, 1);
            } else {
                modCounts.replace(temp, modCounts.get(temp) + 1);
            }
        }

        int numElements = 0;
        for (int i = 1; i <= K >> 1; i++) {
            if (modCounts.containsKey(i)) {
                if (K - i != K >> 1) {
                    if (modCounts.containsKey(K - i)) {
                        numElements += Math.max(modCounts.get(i), modCounts.get(K - i));
                    } else {
                        numElements += modCounts.get(i);
                    }
                } else if (modCounts.containsKey(i)) {
                    numElements++;
                }
            } else if (modCounts.containsKey(K - i)) {
                numElements += modCounts.get(K - i);
            }
        }

        if (modCounts.containsKey(0)) {
            numElements++;
        }

        System.out.println(numElements);
    }
}
