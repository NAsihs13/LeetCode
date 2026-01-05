/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int height(struct TreeNode *root) {
    if (root == NULL) return 0;

    int left = height(root->left);
    if (left == -1) return -1;

    int right = height(root->right);
    if (right == -1) return -1;

    if (left - right > 1 || right - left > 1) {
        return -1;
    }

    if (left > right) {
        return left + 1;
    } else {
        return right + 1;
    }
}

bool isBalanced(struct TreeNode* root) {
    if (height(root) == -1) {
        return false;
    } else {
        return true;
    }
}