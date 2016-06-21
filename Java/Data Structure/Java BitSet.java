import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int M = in.nextInt();
        in.nextLine();

        BitSet[] b = new BitSet[2];
        b[0] = new BitSet(N);
        b[1] = new BitSet(N);

        int x, y;
        String command;
        for (int i = 0; i < M; i++) {
            command = in.next();
            x = in.nextInt();
            y = in.nextInt();

            switch (command) {
                case "AND":
                    b[x - 1].and(b[y - 1]);
                    break;
                case "OR":
                    b[x - 1].or(b[y - 1]);
                    break;
                case "XOR":
                    b[x - 1].xor(b[y - 1]);
                    break;
                case "FLIP":
                    b[x - 1].flip(y);
                    break;
                case "SET":
                    b[x - 1].set(y);
                    break;
            }

            System.out.println(b[0].cardinality() + " " + b[1].cardinality());

            if (in.hasNextLine()) {
                in.nextLine();
            }
        }
    }
}
