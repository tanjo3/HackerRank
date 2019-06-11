import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.nextLine();
        int start = in.nextInt(), end = in.nextInt();

        System.out.println(S.substring(start, end));
    }
}
