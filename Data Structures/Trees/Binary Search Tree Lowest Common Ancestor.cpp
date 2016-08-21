/*
    Node is defined as

    typedef struct node {
        int data;
        node* left;
        node* right;
    } node;
*/

node* lca(node* root, int v1, int v2) {
    if (root == nullptr || min(v1, v2) <= root->data && root->data <= max(v1, v2)) {
        return root;
    }

    if (max(v1, v2) < root->data) {
        return lca(root->left, v1, v2);
    } else {
        return lca(root->right, v1, v2);
    }
}
