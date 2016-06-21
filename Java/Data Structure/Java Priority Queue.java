import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Student {
    private int token;
    private String fname;
    private double cgpa;

    public Student(String fname, double cgpa, int id) {
        super();
        this.token = id;
        this.fname = fname;
        this.cgpa = cgpa;
    }

    public int getToken() {
        return token;
    }

    public String getFname() {
        return fname;
    }

    public double getCgpa() {
        return cgpa;
    }
}

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int totalEvents = Integer.parseInt(in.nextLine());

        PriorityQueue<Student> queue = new PriorityQueue<>(totalEvents, (Student w1, Student w2) -> {
            if (w1.getCgpa() == w2.getCgpa()) {
                if (w1.getFname().equals(w2.getFname())) {
                    return w1.getToken() - w2.getToken();
                } else {
                    return w1.getFname().compareTo(w2.getFname());
                }
            } else if (w1.getCgpa() < w2.getCgpa()) {
                return 1;
            } else {
                return -1;
            }
        });
        while (totalEvents > 0) {
            String event = in.next();

            //Complete your code
            if (event.equals("ENTER")) {
                queue.add(new Student(in.next(), in.nextDouble(), in.nextInt()));

                if (in.hasNextLine()) {
                    in.nextLine();
                }
            } else {
                queue.poll();
            }

            totalEvents--;
        }

        if (queue.isEmpty()) {
            System.out.println("EMPTY");
        } else {
            while (!queue.isEmpty()) {
                System.out.println(queue.poll().getFname());
            }
        }
    }
}
