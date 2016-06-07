import static java.lang.System.in;

class Prime {
    boolean isPrime(int num) {
        if (num < 2) {
            return false;
        }

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    void checkPrime(int... nums) {
        StringBuilder sb = new StringBuilder();

        for (int x : nums) {
            if (isPrime(x)) {
                sb.append(x).append(' ');
            }
        }

        System.out.println(sb.toString());
    }
}
