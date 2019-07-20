#include "stdio.h"
#include<queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> lq;
        queue<TreeNode*> rq;
        if(root->left!=NULL)  {lq.push(root->left);}
        if(root->right!=NULL) {rq.push(root->right);}
        while(!lq.empty() && !rq.empty()){
            if(lq.front()->val != rq.front()->val){
                return false;
            } 
            lq.push(lq.front()->left);
            lq.push(lq.front()->right);
            rq.push(rq.front()->right);
            rq.push(rq.front()->left);
            lq.pop();
            rq.pop();
        }
        if(!lq.empty() || !rq.empty()){
            return false;
        }
        return true;
    }
};

void find_child(int x,vector<TreeNode> &m){
    int len=m.size();
    if(x<len){
        if(2*x+1<len){
            m[x].left= &m[2*x+1];
        }
        if(2*x+2<len){
            m[x].right = &m[2*x+2];
        }
    }
}

int main(){
    vector<TreeNode> m = {1,2,2,3,4,4,3};
    TreeNode* root=&m[0];
    for(int i=0;i<m.size();++i){
        find_child(i,m);
    }
    Solution s;
    bool res=s.isSymmetric(root);
}