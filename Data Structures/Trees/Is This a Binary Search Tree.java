/*  Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

    The Node class is defined as follows:
    class Node {
        int data;
        Node left;
        Node right;
    }
*/

void inOrder(Node root, LinkedList<Integer> soFar) {
    if (root == null) {
        return;
    }

    inOrder(root.left, soFar);
    soFar.add(root.data);
    inOrder(root.right, soFar);
}

boolean checkBST(Node root) {
    if (root == null) {
        return true;
    }

    LinkedList<Integer> inOrderList = new LinkedList<>();
    inOrder(root, inOrderList);

    boolean isBST = true;
    for (int i = 1; i < inOrderList.size(); i++) {
        if (inOrderList.get(i - 1) >= inOrderList.get(i)) {
            isBST = false;
            break;
        }
    }

    return isBST;
}
