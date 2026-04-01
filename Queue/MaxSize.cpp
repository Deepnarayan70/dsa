// Max Size
// You are given an array 
// A
// A of 
// N
// N integers - 
// [
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// N
// ]
// [A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  ], and 
// Q
// Q queries:

// You are given 
// 2
// 2 integers 
// X
// X and 
// Y
// Y.
// Consider the prefix of 
// A
// A of size 
// X
// X - 
// [
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// X
// ]
// [A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// X
// ​
//  ]. Let's represent this array by 
// B
// B.
// Find the maximum size of a subset of 
// B
// B which has a sum 
// ≤
// Y
// ≤Y.
// Note that if the prefix of 
// A
// A contains any element multiple times, it may appear in the chosen subset multiple times too.

// For example, for the array 
// A
// =
// [
// 5
// ,
// 2
// ,
// 3
// ,
// 4
// ,
// 3
// ]
// A=[5,2,3,4,3] and 
// X
// =
// 4
// ,
// Y
// =
// 8
// X=4,Y=8.

// The corresponding array 
// B
// B is 
// [
// 5
// ,
// 2
// ,
// 3
// ,
// 4
// ]
// [5,2,3,4]
// The maximum size of a subset of 
// B
// B with sum 
// ≤
// 8
// ≤8 is 
// 2
// 2
// One example of such a subset is 
// [
// 2
// ,
// 3
// ]
// [2,3].
// Input Format
// The first line contains 
// 2
// 2 integers - 
// N
// N and 
// Q
// Q, the size of the array and the number of queries.
// The second line contains 
// N
// N integers - 
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// N
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  .
// The next 
// Q
// Q lines contain 
// 2
// 2 integers - 
// X
// X and 
// Y
// Y.
// Output Format
// For each query, output the maximum size of a subset of 
// [
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// X
// ]
// [A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// X
// ​
//  ] which has a sum 
// ≤
// Y
// ≤Y.

// Constraints
// 1
// ≤
// N
// ,
// Q
// ≤
// 2
// ⋅
// 10
// 5
// 1≤N,Q≤2⋅10 
// 5
 
// 1
// ≤
// A
// i
// ≤
// N
// 1≤A 
// i
// ​
//  ≤N
// 1
// ≤
// X
// ≤
// N
// 1≤X≤N
// 1
// ≤
// Y
// ≤
// 10
// 9
// 1≤Y≤10 
// 9
 
// Sample 1:
// Input
// Output
// 5 8
// 5 2 3 4 3
// 4 8
// 5 30
// 4 30
// 5 12
// 5 11
// 5 7
// 2 5
// 1 4
// 2
// 5
// 4
// 4
// 3
// 2
// 1
// 0
// Explanation:
// Query 1: Described in problem statement.

// Query 2: The entire array has a sum of 
// 17
// 17, which is 
// ≤
// 30
// ≤30, and so it is fine to choose the entire array.

// Query 3: Here, only the prefix of length 
// 4
// 4 can be chosen, which has a sum of 
// 14
// 14 which is 
// ≤
// 30
// ≤30, and hence the answer is 
// 4
// 4.

// Sample 2:
// Input
// Output
// 3 7
// 1 2 3
// 3 1
// 3 2
// 3 3
// 3 4
// 3 5
// 3 6
// 3 7
// 1
// 1
// 2
// 2
// 2
// 3
// 3
// accepted
// Accepted
// 910
// total-Submissions
// Submissions
// 4679
// accuracy
// Accuracy
// 22.31
// Did you like the problem statement?
// 13 users found this helpful
// More Info
// Time limit1 secs
// Memory limit1.5 GB
// Source Limit50000 Bytes

// Contributors




// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // Fenwick tree for frequencies and sums
// struct Fenwick {
//     int n;
//     vector<long long> bit;
    
//     Fenwick(int size) : n(size), bit(size + 2, 0) {}
    
//     void update(int idx, long long delta) {
//         while (idx <= n) {
//             bit[idx] += delta;
//             idx += idx & -idx;
//         }
//     }
    
//     long long query(int idx) {
//         long long res = 0;
//         while (idx > 0) {
//             res += bit[idx];
//             idx -= idx & -idx;
//         }
//         return res;
//     }
// };

// struct Query {
//     int X, Y, idx;
// };

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int N, Q;
//     cin >> N >> Q;
    
//     vector<int> A(N + 1);
//     for (int i = 1; i <= N; i++) {
//         cin >> A[i];
//     }
    
//     vector<Query> queries(Q);
//     for (int i = 0; i < Q; i++) {
//         cin >> queries[i].X >> queries[i].Y;
//         queries[i].idx = i;
//     }
    
//     // Sort queries by X
//     sort(queries.begin(), queries.end(), [](const Query& a, const Query& b) {
//         return a.X < b.X;
//     });
    
//     Fenwick freq(N), sum(N);
    
//     vector<int> ans(Q);
//     int pos = 0;
    
//     for (const auto& q : queries) {
//         // Add new elements up to X
//         while (pos < q.X) {
//             pos++;
//             int val = A[pos];
//             freq.update(val, 1);
//             sum.update(val, val);
//         }
        
//         // Binary search for max k
//         int low = 0, high = q.X, best = 0;
        
//         while (low <= high) {
//             int mid = (low + high) / 2;
            
//             // Find minimal sum of mid smallest elements in current prefix
//             int l = 1, r = N, t = 0;
//             while (l <= r) {
//                 int m = (l + r) / 2;
//                 if (freq.query(m) <= mid) {
//                     t = m;
//                     l = m + 1;
//                 } else {
//                     r = m - 1;
//                 }
//             }
            
//             long long cnt_t = freq.query(t);
//             long long sum_t = sum.query(t);
            
//             long long minimal_sum = sum_t + (mid - cnt_t) * (t + 1);
            
//             if (minimal_sum <= q.Y) {
//                 best = mid;
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }
        
//         ans[q.idx] = best;
//     }
    
//     for (int i = 0; i < Q; i++) {
//         cout << ans[i] << "\n";
//     }
    
//     return 0;
// }