/*
struct node {
    int data;
    node* left;
    node* right;
}
*/
#include <queue>

void LevelOrder(node* root) {
    if (root == nullptr) {
        return;
    }

    queue<node*> Q;
    Q.push(root);

    node* temp;
    while (!Q.empty()) {
        temp = Q.front();

        cout << temp->data << ' ';

        if (temp->left != nullptr) {
            Q.push(temp->left);
        }

        if (temp->right != nullptr) {
            Q.push(temp->right);
        }

        Q.pop();
    }
}
