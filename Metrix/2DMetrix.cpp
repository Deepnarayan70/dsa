//vector use in 2d form
// vector<vector<int>> v;

// vector<int> row;

// row.push_back(1);
// row.push_back(2);
// v.push_back(row);

// row.clear();
// row.push_back(2);
// row.push_back(3);
// v.push_back(row);

// vector<vector<int>> v;
// v.push_back({1, 2});
// v.push_back({2, 3});
// v.push_back({3, 4});


// //Problem -
// You need to collect anti-diagonals (top-right → bottom-left)
// Order:
// Start from top row (left → right)
// Then from last column (row 1 → n-1)
// Inside each diagonal → go down-left (i++, j--)
// You need to collect anti-diagonals (top-right → bottom-left)
// Order:
// Start from top row (left → right)
// Then from last column (row 1 → n-1)
// Inside each diagonal → go down-left (i++, j--)

// vector<vector<int>> diagonalWaveCollector(vector<vector<int>>& grid) {
//     // add your code here.
//     int m= grid.size();
//     int n= grid[0].size();
//     vector<vector<int>> result;
//     for(int col=0;col<n;col++){
//         int i=0;
//         int j=col;
//         vector<int> temp;
//         while(i<m && j>=0){
//             temp.push_back(grid[i][j]);
//             i++;
//             j--;
//         }
//         result.push_back(temp);
//     }

//     for(int row=1;row<m;row++){
//         int i= row;
//         int j= n-1;
//         vector<int> temp;
//         while(i<m && j>=0){
//             temp.push_back(grid[i][j]);
//             i++;
//             j--;
//         }
//         result.push_back(temp);
//     }
//     return result;
// }



// //problem- calculate border sum
// int matrixBorderSum(vector<vector<int>>& grid) {

//     int r = grid.size();
//     int c = grid[0].size();

//     if (r == 1 && c == 1)
//         return grid[0][0];

//     int sum = 0;

//     if (r == 1) {
//         for (int i = 0; i < c; i++) {
//             sum += grid[0][i];   //  
//         }
//         return sum;
//     }

//     if (c == 1) {
//         for (int i = 0; i < r; i++) {
//             sum += grid[i][0];
//         }
//         return sum;
//     }

//     for (int i = 0; i < r; i++) {
//         if (i != 0 && i != r - 1) {
//             sum += grid[i][0] + grid[i][c - 1];
//         } else {
//             for (int j = 0; j < c; j++) {
//                 sum += grid[i][j];
//             }
//         }
//     }

//     return sum;
// }
