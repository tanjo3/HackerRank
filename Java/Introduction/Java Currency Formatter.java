import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double payment = in.nextDouble();

        String us = NumberFormat.getCurrencyInstance(Locale.US).format(payment);
        System.out.println("US format = " + us);
        System.out.println("India format = " + us.replace("$", "Rs."));
    }
}
