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
        int solve(TreeNode* root, int& result){
           if(root == NULL){// agar root hi null raha toh koi value hi nahi return hoga!
            return 0;
        }

            int left = solve(root->left, result); // tree ka left ko solve kar lo
            int right = solve(root->right, result); // tree ka right ko solve kar lo and result mai uodate kar do

            result = max(result, left+right);
            return max(left, right)+1;
        }
        int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){// agar root hi null raha toh koi value hi nahi return hoga!
            return 0;
        }

        int result = INT_MIN; // ek global variable bna lege value ko return karne ka lye 

        solve(root,result); //solve function mai root and result dalge kiuki result toh update hota rhga !
         
        return result; // in the end mai toh result ko hi return karna hoga!
    }
};