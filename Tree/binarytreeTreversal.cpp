// 102. Binary Tree Level Order Traversal
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
// Example 1:
// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]
// Example 2:
// Input: root = [1]
// Output: [[1]]
// Example 3:
// Input: root = []
// Output: []




// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         vector<vector<int>> ans;
//          if(root==NULL) return  ans;

//         while(!q.empty()){
//             int size= q.size();
//             vector<int> temp;
//             for(int i=0;i<size;i++){
//                 TreeNode* n= q.front();
//                 q.pop();
//                 temp.push_back(n->val);
//                 if(n->left) q.push(n->left);
//                 if(n->right) q.push(n->right);
//             }
//             ans.push_back(temp);
//         }
//         return ans;
//     }
// };