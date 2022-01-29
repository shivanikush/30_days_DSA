class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root == NULL || issymmetricHelp(root->right, root->left);
    }
    bool issymmetricHelp(TreeNode* left, TreeNode* right){
        if(left == NULL || right == NULL) return right == left;
        if(left ->val != right->val) return false;
        
        
        return issymmetricHelp(left ->left, right->right) && issymmetricHelp(left->right , right->left);
    }
    
};
