import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                arr[i][j] = in.nextInt();
            }
        }

        int hor_sums[][] = new int[6][4];
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                hor_sums[i][j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            }
        }

        int temp, max = -64;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                temp = arr[i + 1][j + 1] + hor_sums[i][j] + hor_sums[i + 2][j];

                if (temp > max) {
                    max = temp;
                }
            }
        }

        System.out.println(max);
    }
}
