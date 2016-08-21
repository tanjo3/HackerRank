import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Scanner;

public class Solution {

    static class Node {

        public int index, depth;
        public Node left, right;

        public Node(int index, int depth) {
            this.index = index;
            this.depth = depth;
            this.left = null;
            this.right = null;
        }
    }

    static void inOrder(Node root, LinkedList<Integer> soFar) {
        if (root == null) {
            return;
        }

        inOrder(root.left, soFar);
        soFar.add(root.index);
        inOrder(root.right, soFar);
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Node tree = new Node(1, 1);

        Scanner in = new Scanner(System.in);
        int N = in.nextInt();

        ArrayDeque<Node> input = new ArrayDeque<>();
        input.add(tree);

        HashMap<Integer, LinkedList<Node>> level = new HashMap<>();
        level.put(1, new LinkedList<>(Arrays.asList(tree)));

        int a, b;
        Node temp;
        for (int n = 0; n < N; n++) {
            a = in.nextInt();
            b = in.nextInt();
            temp = input.remove();

            if (a != -1) {
                Node newNode = new Node(a, temp.depth + 1);
                temp.left = newNode;
                input.add(newNode);

                LinkedList<Node> levelList = level.get(newNode.depth);
                if (levelList == null) {
                    level.put(newNode.depth, new LinkedList<>(Arrays.asList(newNode)));
                } else {
                    levelList.add(newNode);
                }
            }

            if (b != -1) {
                Node newNode = new Node(b, temp.depth + 1);
                temp.right = newNode;
                input.add(newNode);

                LinkedList<Node> levelList = level.get(newNode.depth);
                if (levelList == null) {
                    level.put(newNode.depth, new LinkedList<>(Arrays.asList(newNode)));
                } else {
                    levelList.add(newNode);
                }
            }
        }

        int T = in.nextInt(), K, k;
        LinkedList<Integer> inOrderList;
        for (int t = 0; t < T; t++) {
            K = in.nextInt();
            k = K;

            while (true) {
                LinkedList<Node> levelList = level.get(k);

                if (levelList == null) {
                    break;
                } else {
                    for (Node n : levelList) {
                        temp = n.left;
                        n.left = n.right;
                        n.right = temp;
                    }
                }

                k += K;
            }

            inOrderList = new LinkedList<>();
            inOrder(tree, inOrderList);

            for (int i = 0; i < inOrderList.size() - 1; i++) {
                System.out.print(inOrderList.get(i) + " ");
            }
            System.out.println(inOrderList.getLast());
        }
    }
}
