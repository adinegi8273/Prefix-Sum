/*Pattern - Subarray problem using prefix sum (prefix sum problem, focus on left and right of each element in an array)

Problems - 

1. Sum of absolute differences in a sorted array
2. Product of array except self
3. Intervals between identical elements

*/ 

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
 
#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define ll long long 
#define F first
#define S second
#define pii pair<ll,ll>
#define vll vector<ll>
#define vin(n, a) for(ll i = 0; i < n; i++) cin >> a[i] 
#define forn(i, n) for(ll i = 0; i < n; i++)
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define minus cout << "-1" <<  "\n"

// --------------------------------------------------------------------------------------------------------------

// Problem 1 - Sum of absolute differences in a sorted array

// You are given an integer array nums of length n, for each index i (where 0 <= i < n), calculate the sum of absolute differences between nums[i] and all the other elements in an array.

// Constraints - 
// 1 <= n <= 1e5
// 1 <= nums[i] <= 1e4
// nums is sorted in non decreasing order

// vector<int> getSumAbsoluteDifferences(vector<int>& nums) {

//         int n= nums.size();
//         vector<int> prefix(n,0);   

//         prefix[0] = nums[0];
//         for(int i=1;i<n;i++){

//             prefix[i] = prefix[i-1] + nums[i];
//         }
//         vector<int> res(n); 

//         int total = prefix[n-1];
//         for(int i=0;i<n;i++){

//             //the element
//             int elem = nums[i];

//             int ans = 0;
//             //first find out the sum of absolute difference of elements coing before it
//             ans += ((i+1)*elem) - prefix[i];           //LHS > RHS

//             //second is the sum of absolute differences of elements coming after it
//             ans += (total - prefix[i]) - ((n-i-1)*elem);    //RHS > LHS

//             res[i] = ans;
//         }

//         return res;

//         //time  complexity is O(n)
//         //Space complexity is O(n) 
// }


// ------------------------------------------------------------------------------------------------------------

// Problem 2 - Product of array except self

//Mutiple approaches are possible - Below is the optimal one in which no division operdation used also O(1) space is used

// vector<int> productExceptSelf(vector<int>& nums) {

//         //time complexity is O(n) and space complexity is O(1)

//         int n = nums.size();
//         vector<int> res(n); 

//         int product = 1;
//         for(int i=0;i<n;i++){

//             res[i] = product;
//             product *= nums[i];
//         }       
//         product = 1;
//         for(int i=n-1;i>=0;i--){
//             res[i] *= product;
//             product *= nums[i];
//         }

//         return res;
// }

// ------------------------------------------------------------------------------------------------------------------

// Problem 3 - Intervals between Identical elements
    
// Given an array of integers, the task is to find the sum of all intervals for all index i.
// More formally return an array of n integers wherien each is the sum of intervals for index i
// interval of index i and index j is |i-j| only when arr[i] == arr[j]

// Example -

// Input - [10,5,10,10]
// Output - [5,0,3,4]

// vector<long long> getDistances(vector<int>& nums) {
        
//         unordered_map<int,long long> mpp;
//         unordered_map<int,long long> prev_pos;
//         unordered_map<int,long long> sum;

//         int n = nums.size();

//         vector<long long> res(n,0);

//         for(int i=0;i<n;i++){

//             int elem = nums[i];
//             sum[elem] = sum[elem] + mpp[elem]*(i - prev_pos[elem]);
//             res[i] = sum[elem];
//             mpp[elem]++;
//             prev_pos[elem] = i;
//         }

//         mpp.clear();
//         prev_pos.clear();
//         sum.clear();

//         for(int i = n-1;i>=0;i--){
//             int elem = nums[i];
//             sum[elem] = sum[elem] + mpp[elem]*(prev_pos[elem] - i);
//             res[i] += sum[elem];
//             mpp[elem]++;
//             prev_pos[elem] = i;
//         }


//         return res;
// }