//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution {
    public static void main(String[] argh) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();

        HashMap<String, Integer> phonebook = new HashMap<>();
        for (int i = 0; i < n; i++) {
            phonebook.put(in.nextLine(), in.nextInt());
            in.nextLine();
        }

        while (in.hasNext()) {
            String s = in.nextLine();

            if (!phonebook.containsKey(s)) {
                System.out.println("Not found");
            } else {
                System.out.println(s + "=" + phonebook.get(s));
            }
        }
    }
}
