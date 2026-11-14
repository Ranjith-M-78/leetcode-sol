/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    // 1. Both nodes are NULL -> structurally identical at this branch
    if (p == NULL && q == NULL) {
        return true;
    }
    
    // 2. One is NULL and the other isn't, or values don't match
    if (p == NULL || q == NULL || p->val != q->val) {
        return false;
    }
    
    // 3. Recursively check both left and right subtrees
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}