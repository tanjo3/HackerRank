import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            String input = sc.next();

            //Complete the code
            Stack<Character> stack = new Stack<>();

            OUTER:
            for (int i = 0; i < input.length(); i++) {
                char c = input.charAt(i);
                switch (c) {
                    case ')':
                        if (stack.empty() || stack.peek() != '(') {
                            stack.push('\0');
                            break OUTER;
                        } else {
                            stack.pop();
                        }
                        break;
                    case '}':
                        if (stack.empty() || stack.peek() != '{') {
                            stack.push('\0');
                            break OUTER;
                        } else {
                            stack.pop();
                        }
                        break;
                    case ']':
                        if (stack.empty() || stack.peek() != '[') {
                            stack.push('\0');
                            break OUTER;
                        } else {
                            stack.pop();
                        }
                        break;
                    default:
                        stack.push(c);
                }
            }

            System.out.println(stack.empty());
        }
    }
}
