#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;  
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 }; 
class Solution {
public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
        inorder_tree_walk(root);
        return res;
    }
    void inorder_tree_walk(TreeNode* root){
        if(root!=NULL){
            inorder_tree_walk(root->left);
            res.push_back(root->val);
            inorder_tree_walk(root->right);
        }
    }
};
int main(){
    
}