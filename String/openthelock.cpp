// ######## Leetcode 752. Open the Lock ######## good one
// 752. Open the Lock
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// You have a lock in front of you with 4 circular wheels. Each wheel has 10 slots: '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'. The wheels can rotate freely and wrap around: for example we can turn '9' to be '0', or '0' to be '9'. Each move consists of turning one wheel one slot.
// The lock initially starts at '0000', a string representing the state of the 4 wheels.
// You are given a list of deadends dead ends, meaning if the lock displays any of these codes, the wheels of the lock will stop turning and you will be unable to open it.
// Given a target representing the value of the wheels that will unlock the lock, return the minimum total number of turns required to open the lock, or -1 if it is impossible.
// Example 1
// Input: deadends = ["0201","0101","0102","1212","2002"], target = "0202"
// Output: 6
// Explanation: 
// A sequence of valid moves would be "0000" -> "1000" -> "1100" -> "1200" -> "1201" -> "1202" -> "0202".
// Note that a sequence like "0000" -> "0001" -> "0002" -> "0102" -> "0202" would be invalid,
// because the wheels of the lock become stuck after the display becomes the dead end "0102".
// Example 2:
// Input deadends = ["8888"], target = "0009"
// Output: 1
// Explanation: We can turn the last wheel in reverse to move from "0000" -> "0009".
// Example 3:
// Input: deadends = ["8887","8889","8878","8898","8788","8988","7888","9888"], target = "8888"
// Output: -1
// Explanation: We cannot reach the target without getting stuck.
 

// class Solution {
// public:
 
//     int openLock(vector<string>& deadends, string target) {
//         unordered_set<string> dead(deadends.begin(), deadends.end());
//         unordered_set<string> visited;

//         if (dead.count("0000")) return -1;

//         queue<pair<string,int>> q;
//         q.push({"0000", 0});
//         visited.insert("0000");

//         while (!q.empty()) {
//             auto front = q.front();
//             q.pop();

//             string curr = front.first;
//             int steps = front.second;

//             if (curr == target) return steps;

//             for (int i = 0; i < 4; i++) {
//                 for (int move : {1, -1}) {

//                     string next = curr;
//                     next[i] = (next[i] - '0' + move + 10) % 10 + '0';

//                     if (!dead.count(next) && !visited.count(next)) {
//                         visited.insert(next);
//                         q.push({next, steps + 1});
//                     }
//                 }
//             }
//         }

//         return -1;

//     // if (target == "0000") return 0;

//     //     unordered_set<string> dead(deadends.begin(), deadends.end());
//     //     if (dead.count("0000")) return -1;

//     //     queue<pair<string,int>> q;
//     //     unordered_set<string> visited;

//     //     q.push({"0000", 0});
//     //     visited.insert("0000");

//     //     while (!q.empty()) {
//     //         auto [curr, level] = q.front();
//     //         q.pop();

//     //         for (int i = 0; i < 4; i++) {
//     //             for (int move : {1, -1}) {

//     //                 string next = curr;
//     //                 next[i] = (next[i] - '0' + move + 10) % 10 + '0';

//     //                 if (next == target)
//     //                     return level + 1;

//     //                 if (!dead.count(next) && !visited.count(next)) {
//     //                     visited.insert(next);
//     //                     q.push({next, level + 1});
//     //                 }
//     //             }
//     //         }
//     //     }

//     //     return -1;
//     }
// };