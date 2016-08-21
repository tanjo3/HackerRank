/*
    The structure of the node is

    typedef struct node {
        int freq;
        char data;
        node* left;
        node* right;
    } node;
*/

void decode_huff(node* root, string s) {
    node* temp = root;
    for (auto it = s.begin(); it != s.end(); it++) {
        if (*it == '0') {
            temp = temp->left;
        } else {
            temp = temp->right;
        }

        if (temp->data != 0) {
            cout << temp->data;
            temp = root;
        }
    }
    cout << endl;
}
