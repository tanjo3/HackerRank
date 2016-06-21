    // Write your code here
    public static performOperation checkEvenOdd() {
        return (int a) -> {
            return a % 2;
        };
    }

    public static performOperation checkPrime() {
        return (int a) -> {
            if (a < 2) {
                return 1;
            }

            for (int i = 2; i * i <= a; i++) {
                if (a % i == 0) {
                    return 1;
                }
            }
            return 0;
        };
    }

    public static performOperation checkPalindrome() {
        return (int a) -> {
            if (a < 0) {
                return 1;
            }

            String x = String.valueOf(a);
            for (int i = 0; i < x.length() / 2; i++) {
                if (x.charAt(i) != x.charAt(x.length() - 1 - i)) {
                    return 1;
                }
            }
            return 0;
        };
    }
}
