class Calculate {
    Scanner sc = new Scanner(System.in);
    VolumePrinter output = new VolumePrinter();

    int getINTVal() throws IOException {
        int temp = sc.nextInt();
        if (temp <= 0) {
            throw new NumberFormatException("All the values must be positive");
        }

        return temp;
    }

    double getDoubleVal() throws IOException {
        double temp = sc.nextDouble();
        if (temp <= 0) {
            throw new NumberFormatException("All the values must be positive");
        }

        return temp;
    }

    static Volume get_Vol() {
        return new Volume();
    }
}

class Volume {
    double main(int a) {
        return a * a * a;
    }

    double main(int l, int b, int h) {
        return l * b * h;
    }

    double main(double r) {
        return (2.0 / 3.0) * Math.PI * r * r * r;
    }

    double main(double r, double h) {
        return Math.PI * (r * r) * h;
    }
}

class VolumePrinter {
    void display(double volume) {
        System.out.printf("%.3f\n", volume);
    }
}
