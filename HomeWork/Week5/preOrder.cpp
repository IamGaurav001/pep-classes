#include <iostream>
#include <vector>
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

void preorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;

    result.push_back(root->val);
    preorder(root->left, result);
    preorder(root->right, result);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    preorder(root, result);
    return result;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int> result = preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int x : result)
        cout << x << " ";

    return 0;
}
