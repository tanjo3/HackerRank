/*
    Node is defined as

    typedef struct node {
        int data;
        node* left;
        node* right;
    } node;
*/

node* insert(node* root, int value) {
    if (root == nullptr) {
        node* newNode = new node();
        newNode->data = value;
        return newNode;
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}
