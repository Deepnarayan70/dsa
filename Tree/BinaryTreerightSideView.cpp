// 199. Binary Tree Right Side View
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
// Example 1:
// Input: root = [1,2,3,null,5,null,4]
// Output: [1,3,4]
// Explanation:
// Example 2:
// Input: root = [1,2,3,4,null,null,null,5]
// Output: [1,3,4,5]
// Explanation:
// Example 3:
// Input: root = [1,null,3]
// Output: [1,3]
// Example 4:
// Input: root = []
// Output: []




 
// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans;
//         queue<TreeNode*> q;
//         if(root==NULL ) return ans;
//         q.push(root);
//         while(!q.empty()){
//             TreeNode* rightmost=NULL;
//             int s=q.size();
//             for(int i=0;i<s;i++){
//                 TreeNode* temp=q.front();
//                 q.pop();
//                 rightmost= temp;
//                 if(temp->left!=NULL) q.push(temp->left);
//                 if(temp->right!=NULL) q.push(temp->right);
//             }
//             if(rightmost!=NULL) ans.push_back(rightmost->val);
//         }
//         return ans;
//     }
// };