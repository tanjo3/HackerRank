//Write your code here
class Add {
    void add(int... addends) {
        StringBuilder sb = new StringBuilder();
        int sum = 0;

        for (int x : addends) {
            sum += x;

            sb.append(x).append('+');
        }
        sb.setCharAt(sb.length() - 1, '=');
        sb.append(sum);

        System.out.println(sb.toString());
    }
}
