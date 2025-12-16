//Pattern 2 - Build 2D prefix sum matrix

//Problem1 - Matrix Block sum
//Problem2 - Maximum sum of an hourglass



// Problem Statement 1: Matrix Block Sum

// You are given an m × n integer matrix mat and an integer k.

// For each cell mat[i][j], calculate the sum of all elements mat[r][c] such that:

// i - k ≤ r ≤ i + k
// j - k ≤ c ≤ j + k


// and (r, c) is a valid index inside the matrix.

// Return a new matrix answer of the same size, where:

// answer[i][j] = sum of all valid elements in the k-radius block around mat[i][j]

// Important Notes

// The block is a square centered at (i, j) with radius k

// Indices that go outside the matrix are ignored

// You must compute this for every cell

// Example 1
// Input:
// mat = [[1, 2, 3],
//        [4, 5, 6],
//        [7, 8, 9]]
// k = 1

// Output:
// [[12, 21, 16],
//  [27, 45, 33],
//  [24, 39, 28]]

// Example 2
// Input:
// mat = [[1, 2, 3],
//        [4, 5, 6],
//        [7, 8, 9]]
// k = 2

// Output:
// [[45, 45, 45],
//  [45, 45, 45],
//  [45, 45, 45]]

// Constraints
// m == mat.length
// n == mat[0].length

// 1 ≤ m, n ≤ 100
// 1 ≤ mat[i][j] ≤ 100
// 0 ≤ k ≤ 100



/*
    How do we create prefix 2d matrix

    In this we ensure getting the top left sum of any position considering starting as (0,0) in O(1)

    we create another matrix prefix with same dimensions and find

    prefix[i][j] = arr[i][j] + prefix[i-1][j] (left) + prefix[i][j-1](top) - prefix[i-1][j-1] (overlapping); ---> Simulate it by taking the prefix sum of roiws first and then prefix sum of columns

    now to extract the sum of submatrix ranging from (top,left)->(bottom,right) we use this formula

    sum = prefix[bottom][right] - preifix[top-1][right] - prefix[bottom][left-1] + prefix[top-1][bottom-1];

    and the way to find valid bottom, right, top and left are - 

    top    = max(0, i - k)
    bottom = min(m - 1, i + k)
    left   = max(0, j - k)
    right  = min(n - 1, j + k)

*/


// vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
//     int n = mat.size();
//     int m = mat[0].size();

//     vector<vector<int>> prefix(n,vector<int>(m));
//     for(int i=0;i<n;i++){

//         for(int j=0;j<m;j++){

//             prefix[i][j] = mat[i][j];

//             if(i != 0) prefix[i][j] += prefix[i-1][j];
//             if(j != 0) prefix[i][j] += prefix[i][j-1];

//             if(i != 0 && j != 0) prefix[i][j] -= prefix[i-1][j-1];
//         }
//     }

//     //now the prefix matrix is finished

//     int top,right,left,bottom;
//     vector<vector<int>> ans(n,vector<int>(m));
//     for(int i=0;i<n;i++){

//         for(int j=0;j<m;j++){
                
//             //now find top and left and right and bottom
//             top = max(0,i-k);
//             left = max(0,j-k);
//             right = min(m-1,j+k);
//             bottom = min(n-1,i+k);
                
//             //sum will be
//             ans[i][j] = prefix[bottom][right];

//             if(top != 0) ans[i][j] -= prefix[top-1][right];
//             if(left != 0) ans[i][j] -= prefix[bottom][left-1];
//             if(top != 0 && bottom != 0) ans[i][j] += prefix[top-1][bottom-1];

//         }
//     }

//     return ans;
// }


// -----------------------------------------------------------------------------------------------------------------


// Problem Statement 2 - 

// You are given a 2D array (matrix) of integers with at least 3 rows and 3 columns.

// An hourglass in the matrix is a subset of values with the following shape:

// a b c
//   d
// e f g


// That is, for a position (i, j), the hourglass consists of:

// Top row: matrix[i][j], matrix[i][j+1], matrix[i][j+2]

// Middle: matrix[i+1][j+1]

// Bottom row: matrix[i+2][j], matrix[i+2][j+1], matrix[i+2][j+2]

// Task

// Find and return the maximum hourglass sum in the given matrix.

// Input

// A 2D integer array matrix of size m × n

// m ≥ 3 and n ≥ 3

// Output

// A single integer representing the maximum hourglass sum.

// Constraints

// -10^9 ≤ matrix[i][j] ≤ 10^9

// 3 ≤ m, n ≤ 100 (may vary depending on platform)


// Example
// Input
// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 2 4 4 0
// 0 0 0 2 0 0
// 0 0 1 2 4 0

// Output
// 19

// Explanation

// The hourglass with the maximum sum is:

// 2 4 4
//   2
// 1 2 4


// Sum = 2 + 4 + 4 + 2 + 1 + 2 + 4 = 19


// Approach - Using a nomal approach will work and will be more efficient than the approach using prefix sums

