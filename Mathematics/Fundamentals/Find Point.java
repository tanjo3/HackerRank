import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();

        for (int t = 0; t < T; t++) {
            int Px = in.nextInt();
            int Py = in.nextInt();
            int Qx = in.nextInt();
            int Qy = in.nextInt();

            int x = 2 * Qx - Px;
            int y = 2 * Qy - Py;

            System.out.println(x + " " + y);
        }
    }
}
