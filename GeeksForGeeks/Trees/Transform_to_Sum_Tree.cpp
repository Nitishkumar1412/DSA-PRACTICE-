class Solution {
  public:
  
    int solve(Node* root){
        if(root == NULL) return 0;
        
        int leftSum = solve(root->left);
        int rightSum = solve(root->right);
        
        int oldValue = root->data;
        
        root->data = leftSum + rightSum;
        
        return root->data + oldValue;
    }
  
    void toSumTree(Node *root) {
        solve(root);
    }
};