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


int countNodes(struct TreeNode* root) {
    return treeSize(root);
}