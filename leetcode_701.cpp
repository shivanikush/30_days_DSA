class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        if (val > root->val) root->right = insertIntoBST(root->right, val); // Continue searching in the right subtree
        else root->left = insertIntoBST(root->left, val); // Continue searching in the left subtree
        return root;
    }
};
