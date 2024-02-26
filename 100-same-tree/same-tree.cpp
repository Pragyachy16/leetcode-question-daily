/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)//dono hi null ho toh return true!
         return true;

         if(p==NULL || q==NULL)//dono mai se koi wk null ho toh return false!
          return false;

        if(p->val != q->val)//dono ka value same hona chaiye agar nahi hai same toh retrun false!
         return false;

        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right); // done ka left and rigt same hi hona chaiye!
    }
};