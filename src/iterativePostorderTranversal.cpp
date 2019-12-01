class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL) return res;
        stack<TreeNode*> s;
        s.push(root);
        TreeNode* pre=NULL;
        while(!s.empty()){
            root=s.top();
            if(root==NULL){
                s.pop();
                continue;
            }
            else if((root->left==NULL && root->right==NULL)|| (pre!=NULL &&(root->left==pre || root->right==pre))){
                s.pop();
                res.push_back(root->val);
            }
            else if(root->left!=pre && root->right!=pre){
                s.push(root->right);
                s.push(root->left);
            }
            pre=root;
        }
        return res;
    }
};
