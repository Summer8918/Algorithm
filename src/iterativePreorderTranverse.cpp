class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            root=s.top();
            res.push_back(root->val);
            s.pop();
            if(root->right!=NULL){
                s.push(root->right);
            }
            if(root->left!=NULL){
                s.push(root->left);
            }
        }
        return res;
    }
};
