/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int treeSize(struct TreeNode *root) {
    if (root == NULL) {
        return 0;
    } else {
        return 1 + treeSize(root->left) + treeSize(root->right);
    }
}

int kthSmallest(struct TreeNode* root, int k) {
    int leftSize = treeSize(root->left);
    if (leftSize == k - 1) {
        return root->val;
    } else if (leftSize < k) {
        return kthSmallest(root->right, k - leftSize - 1);
    } else {
        return kthSmallest(root->left, k);
    }
}