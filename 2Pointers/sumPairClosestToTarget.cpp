//GFG Problem
// Sum Pair closest to target
// Difficulty: EasyAccuracy: 44.75%Submissions: 74K+Points: 2
// Given an array arr[] and a number target, find a pair of elements (a, b) in arr[], where a ≤ b whose sum is closest to target.
// Note: Return the pair in sorted order and if there are multiple such pairs return the pair with maximum absolute difference. If no such pair exists return an empty array.
// Examples:
// Input: arr[] = [10, 30, 20, 5], target = 25
// Output: [5, 20]
// Explanation: As 5 + 20 = 25 is closest to 25.
// Input: arr[] = [5, 2, 7, 1, 4], target = 10
// Output: [2, 7]
// Explanation: As (4, 5), (2, 7) and (4, 7) both are closest to 10, but absolute difference of (4, 5) is 1, (2, 7) is 5 and (4, 7) is 3. Hence, [2, 7] has maximum absolute difference and closest to target. 
// Input: arr[] = [10], target = 10
// Output: []
// Explanation: As the input array has only 1 element, return an empty array.


// class Solution {
// public:
//     vector<int> sumClosest(vector<int>& arr, int target) {
//         int n = arr.size();
//         if (n < 2) return {};

//         sort(arr.begin(), arr.end());

//         int l = 0, r = n - 1;
//         int bestDiff = INT_MAX;
//         vector<int> ans;

//         while (l < r) {
//             int sum = arr[l] + arr[r];
//             int diff = abs(sum - target);

//             if (diff < bestDiff ||
//                (diff == bestDiff && abs(arr[l] - arr[r]) > abs(ans[0] - ans[1]))) {
//                 bestDiff = diff;
//                 ans = {arr[l], arr[r]};
//             }

//             if (sum < target)
//                 l++;
//             else
//                 r--;
//         }
//         return ans;
//     }
// };
