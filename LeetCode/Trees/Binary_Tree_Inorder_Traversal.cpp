class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* node=root;
        stack<TreeNode*> st;
        while(true)
        {
            if(node==nullptr)
            {
                if(st.empty())
                {
                    break;
                }
                node=st.top();
                ans.push_back(node->val);
                st.pop();
                node=node->right;
            }
            else
            {
                st.push(node);
                node=node->left;
            }
        }
        return ans;
    }
};