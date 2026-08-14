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
        if(p==nullptr and q==nullptr) return true;
        if((p==nullptr and q!=nullptr) or (q==nullptr and p!=nullptr)) return false;
        bool L=isSameTree(p->left,q->left);
        bool R=isSameTree(p->right,q->right);
        if(L== true and R==true and p->val==q->val) return true;
        else return false;

    }
};
