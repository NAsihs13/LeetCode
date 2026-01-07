/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool bst(struct TreeNode *root, int min, int max) {
    if (root == NULL) return true;

    if (root->left == NULL && root->right == NULL) return true;
    if (root->left == NULL || root->right == NULL) return false;
    

    if (root->val <= min && root->val >= max) {
        return false;
    }

    return bst(root->left, min, root->val) && bst(root->right, root->val, max);

}

 

bool isValidBST(struct TreeNode* root) {
    return bst(root, LONG_MIN, LONG_MAX);
}