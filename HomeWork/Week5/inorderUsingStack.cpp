#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> st;

    while (root != NULL || !st.empty()) {

        while (root != NULL) {
            st.push(root);
            root = root->left;
        }

        root = st.top();
        st.pop();

        result.push_back(root->val);
        root = root->right;
    }

    return result;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int> result = inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int x : result)
        cout << x << " ";

    return 0;
}
