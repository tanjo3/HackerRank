class SumInLeavesVisitor extends TreeVis {
    private int result = 0;

    public int getResult() {
        //implement this
        return result;
    }

    public void visitNode(TreeNode node) {
        //implement this
    }

    public void visitLeaf(TreeLeaf leaf) {
        //implement this
        result += leaf.getValue();
    }
}

class ProductOfRedNodesVisitor extends TreeVis {
    private int result = 1;

    public int getResult() {
        //implement this
        return result;
    }

    public void visitNode(TreeNode node) {
        //implement this
        if (node.getColor() == Color.RED) {
            result *= node.getValue() % (1e9 + 7);
            result %= 1e9 + 7;
        }
    }

    public void visitLeaf(TreeLeaf leaf) {
        //implement this
        if (leaf.getColor() == Color.RED) {
            result *= leaf.getValue() % (1e9 + 7);
            result %= 1e9 + 7;
        }
    }
}

class FancyVisitor extends TreeVis {
    private int nonLeafEvenSum = 0;
    private int greenLeafSum = 0;

    public int getResult() {
        //implement this
        return Math.abs(nonLeafEvenSum - greenLeafSum);
    }

    public void visitNode(TreeNode node) {
        //implement this
        if (node.getDepth() % 2 == 0) {
            nonLeafEvenSum += node.getValue();
        }
    }

    public void visitLeaf(TreeLeaf leaf) {
        //implement this
        if (leaf.getColor() == Color.GREEN) {
            greenLeafSum += leaf.getValue();
        }
    }
}

public class Solution {

    public static Tree solve() {
        //read the tree from STDIN and return its root as a return value of this function
        Scanner in = new Scanner(System.in);
        int n = Integer.parseInt(in.nextLine());

        int[] x = new int[n];
        for (int i = 0; i < n; i++) {
            x[i] = in.nextInt();
        }

        Color[] c = new Color[n];
        for (int i = 0; i < n; i++) {
            c[i] = in.nextInt() == 0 ? Color.RED : Color.GREEN;
        }

        int u, v;
        Map<Integer, List<Integer>> edgeList = new Hashtable<Integer, List<Integer>>();
        for (int i = 0; i < n - 1; i++) {
            u = in.nextInt() - 1;
            v = in.nextInt() - 1;

            if (!edgeList.containsKey(u)) {
                edgeList.put(u, new LinkedList<Integer>());
            }
            edgeList.get(u).add(v);

            if (!edgeList.containsKey(v)) {
                edgeList.put(v, new LinkedList<Integer>());
            }
            edgeList.get(v).add(u);
        }

        Tree[] tree = new Tree[n];
        tree[0] = new TreeNode(x[0], c[0], 0);

        Queue<Integer> q = new LinkedList<Integer>();
        q.add(0);

        int parent;
        List<Integer> adj;
        boolean isChildLeaf;
        while(!q.isEmpty()) {
            parent = q.remove();
            adj = edgeList.get(parent);

            for (int child : adj) {
                if (tree[child] == null) {
                    isChildLeaf = true;
                    for (int a : edgeList.get(child)) {
                        if (tree[a] == null) {
                            isChildLeaf = false;
                            break;
                        }
                    }

                    if (isChildLeaf) {
                        tree[child] = new TreeLeaf(x[child], c[child], tree[parent].getDepth() + 1);
                    } else {
                        tree[child] = new TreeNode(x[child], c[child], tree[parent].getDepth() + 1);
                        q.add(child);
                    }

                    ((TreeNode) tree[parent]).addChild(tree[child]);
                }
            }
        }

        return tree[0];
    }
