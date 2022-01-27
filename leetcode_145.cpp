class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(!root) return ret;
        stack<TreeNode*> st;
        st.push(root);
        st.push(root);
        TreeNode *cur;
        while(!st.empty()){
            cur = st.top();
            st.pop();
            if(!st.empty()&&st.top() == cur){
                if(cur->right) {
                    st.push(cur->right);
                    st.push(cur->right);
                }
                if(cur->left){
                    st.push(cur->left);
                    st.push(cur->left);
                }
            }
            else
                ret.push_back(cur->val);
        }
        return ret;
    }
        
};
