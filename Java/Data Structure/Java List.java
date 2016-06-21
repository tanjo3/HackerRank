import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        in.nextLine();

        LinkedList<Integer> list = new LinkedList<>();
        for (int i = 0; i < N; i++) {
            list.add(in.nextInt());
        }

        int Q = in.nextInt();
        in.nextLine();

        int x, y;
        String command;
        for (int i = 0; i < Q; i++) {
            command = in.nextLine();

            if (command.equals("Insert")) {
                x = in.nextInt();
                y = in.nextInt();
                list.add(x, y);
            } else {
                x = in.nextInt();
                list.remove(x);
            }

            if (in.hasNextLine()) {
                in.nextLine();
            }
        }

        for (int i = 0; i < list.size() - 1; i++) {
            System.out.print(list.get(i) + " ");
        }
        System.out.println(list.getLast());
    }
}
