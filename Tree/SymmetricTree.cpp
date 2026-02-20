//LeetcodeProblem: 101. Symmetric Tree
// 101. Symmetric Tree
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
// Example 1:
// Input: root = [1,2,2,3,4,4,3]
// Output: true
// Example 2:
// Input: root = [1,2,2,null,3,null,3]
// Output: false



// class Solution {
// public:
//     bool check(TreeNode* l,TreeNode* r){
//         // if(l==NULL && r==NULL) return true;
//         if(l==NULL || r==NULL) return l==r;
//         if(l->val!= r->val) return false;
//         return check(l->left,r->right) &&  check(l->right,r->left);
//     }
//     bool isSymmetric(TreeNode* root) {
//         return check(root->left,root->right);
//     }
// };