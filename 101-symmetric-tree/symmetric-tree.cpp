class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true; // Both are null, so they are symmetric
        if (!left || !right) return false; // One is null but the other isn't, so not symmetric
        
        // Check if values are equal and the left subtree of one tree is a mirror of the right subtree of the other
        return (left->val == right->val) &&
               isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if (!root) return true; // Empty tree is symmetric
        return isMirror(root->left, root->right); // Check if left and right subtrees are mirrors
    }
};
