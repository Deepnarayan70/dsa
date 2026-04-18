// // Biweekly Contest 180
// // 3896. Minimum Operations to Transform Array into Alternating Prime
// // Solved
// // Medium
// // premium lock icon
// // Companies
// // Hint
// // You are given an integer array nums.
// // An array is considered alternating prime if:
// // Elements at even indices (0-based) are prime numbers.
// // Elements at odd indices are non-prime numbers.
// // In one operation, you may increment any element by 1.
// // Return the minimum number of operations required to transform nums into an alternating prime array.
// // A prime number is a natural number greater than 1 with only two factors, 1 and itself.
// // Example 1:
// // Input: nums = [1,2,3,4]
// // Output: 3
// // Explanation:
// // The element at index 0 must be prime. Increment nums[0] = 1 to 2, using 1 operation.
// // The element at index 1 must be non-prime. Increment nums[1] = 2 to 4, using 2 operations.
// // The element at index 2 is already prime.
// // The element at index 3 is already non-prime.
// // Total operations = 1 + 2 = 3.
// // Example 2:
// // Input: nums = [5,6,7,8]
// // Output: 0
// // Explanation:
// // The elements at indices 0 and 2 are already prime.
// // The elements at indices 1 and 3 are already non-prime.
// // No operations are needed.
// // Example 3:
// // Input: nums = [4,4]
// // Output: 1
// // Explanation:
// // The element at index 0 must be prime. Increment nums[0] = 4 to 5, using 1 operation.
// // The element at index 1 is already non-prime.
// // Total operations = 1.


// class Solution {
// public:
//     bool checkprime(int n){
//         if(n<=1) return false;
//         for(int i = 2; i * i <= n; i++){
//             if(n%i==0) return false;
//         }
//         return true;
//     }
//     int minOperations(vector<int>& nums) {
//         int count=0;
//         for(int i=0;i<nums.size();i=i+2){
//             while(!checkprime(nums[i])){
//                     count++;
//                 nums[i]++;
//             }
//         }
//         for(int i=1;i<nums.size();i=i+2){
//             while(checkprime(nums[i])){
//                     count++;
//                     nums[i]++;
//             }
//         }

//         return count;
//     }
// };