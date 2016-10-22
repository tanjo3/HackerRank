import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int month = in.nextInt() - 1;
        int day = in.nextInt();
        int year = in.nextInt();

        Calendar cal = Calendar.getInstance();
        cal.set(year, month, day);

        SimpleDateFormat sdf = new SimpleDateFormat("EEEE");
        System.out.println(sdf.format(cal.getTime()).toUpperCase());
    }
}
