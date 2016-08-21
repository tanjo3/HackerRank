/*
struct node {
    int data;
    node* left;
    node* right;
};
*/
#include <stack>

void top_view(node* root) {
    if (root == nullptr) {
        return;
    }

    stack<int> S;

    node* temp = root;
    while (temp != nullptr) {
        S.push(temp->data);
        temp = temp->left;
    }
    while (!S.empty()) {
        cout << S.top() << ' ';
        S.pop();
    }

    temp = root;
    while (temp->right != nullptr) {
        cout << temp->right->data << ' ';
        temp = temp->right;
    }
}
