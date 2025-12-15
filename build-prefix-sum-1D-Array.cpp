//Pattern 1 - Building prefix sum 1D array

// Problems - 
// 1. Sum of all odd length subarrays
// 2. Find Pivot index
// 3. Number of ways to split arrays


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


// Problem 1- Sum of all odd length subarrays: You are given an array of positive llegers arr. Your task  is to return the sum of all possible subarrays of arr that have the odd length

// Test cases

// Input - [1,4,2,5,3]
// Output - 58

//Constralls

// 1<= arr.length <=100
// 1<=arr[i]<=1000


// Approach 1 - O(n^2)


// ll solve(vll& arr){

//     ll res = 0;

//     ll n = arr.size();

//     vll prefix(n,0);

//     forn(i,n){//O(n)

//         if(i == 0) prefix[i] =arr[i];
//         else prefix[i] = prefix[i-1] + arr[i];
        
//     }

//     //now you have the range sum
//     ll size = 1;//this size you will keep it as odd means 1->3->7..

//     while(size <= n){//O(n)

//         ll l = 0,r = size-1;

//         ll sum = 0;

//         while(r < n){//O(logn base size)

//             sum = prefix[r];
//             if(l != 0) sum -= prefix[l-1];

//             res = res + sum;
//             l++;r++;
//         }

//         size += 2;//next odd length
//     }
    
//     return res;

//     //Overall time complexity  - O(n) + O(logn base size)  -> O(n^2)
//     //Overall Space complexity - O(n) mallaining prefix sum also
// }


//Approach 2 - Optimal Approach O(n) by observation and maths

//I want to know that the current element how many yimes it contribute to the result

// ll solve(vll& arr){

//     ll n = arr.size();
//     ll sum = 0;
//     forn(i,n){

//         ll left = (i+1)/2;
//         ll right = (n-i)/2;

//         ll leftEven = left/2;
//         ll leftOdd = (left+1)/2;

//         ll rightEven = right/2;
//         ll rightOdd = (right+1)/2;

//         ll cnt = (leftEven*rightEven) + (leftOdd*rightOdd);
//         sum += (cnt*arr[i]);
//     }

//     return sum;
// }

// formulaes to remember - 
// 1. Starting from current position how many odd length subarrays you can make - (len+1)/2
// 2. Starting from current position how many even length subarrays you can make - (len)/2
// 3. odd length of subarray paane ke liye (evenleft * evenright + oddleft * oddright)

// ----------------------------------------------------------------------------------------------------------------

// Problem Statement 2 - : Find Pivot Index

// Given an integer array nums, find the pivot index.

// The pivot index is the index where the sum of all elements strictly to the left of the index is equal to the sum of all elements strictly to the right of the index.

// If the index is at the start of the array, the left sum is considered 0.

// If the index is at the end of the array, the right sum is considered 0.

// Return the leftmost pivot index if it exists.
// If no such index exists, return -1.


// Example Test Cases - 

// Test Case 1
// Input: nums = [1, 7, 3, 6, 5, 6]
// Output: 3
// Explanation:
// Left sum = 1 + 7 + 3 = 11
// Right sum = 5 + 6 = 11

// Test Case 2
// Input: nums = [1, 2, 3]
// Output: -1
// Explanation:
// No index satisfies the condition.

// Test Case 3
// Input: nums = [2, 1, -1]
// Output: 0
// Explanation:
// Left sum = 0
// Right sum = 1 + (-1) = 0


// Constraints
// 1 ≤ nums.length ≤ 10^4
// -1000 ≤ nums[i] ≤ 1000


//Did a little bit reasoning that whether it is possible multiple pivot index example -> 1, 1, 0, 0, 1, 1

// Approach1 - Found Pivot index using Prefix array in O(n)  

// ll solve(vll& arr){

//     ll n = arr.size();

//     ll sum = 0;

//     ll total = 0;

//     for(ll x:arr) total += x;

//     forn(i,n){

//         total -= (sum + arr[i]);

//         if(total == sum){
//             return i;
//         }

//         sum = sum + arr[i];
//     }

//     return -1;//signifies didn't get any pivot index

// }

// -----------------------------------------------------------------------------------------------------------

//This is the similar problem - 

// Problem Statement 3 - Number of ways to split an array

// You are given an integer array nums of length n.

// You want to split the array into two non-empty subarrays at some index i such that:

// Left subarray = nums[0 .. i]

// Right subarray = nums[i+1 .. n-1]

// A split is considered valid if:

// sum of left subarray ≥ sum of right subarray sum of left subarray ≥ sum of right subarray

// Return the number of valid ways to split the array.

// Important Conditions

// Both subarrays must be non-empty

// int main(){
    
//     ll n;
//     cin>>n;

//     vll arr(n);

//     vin(n,arr);

//     cout<<solve(arr);
//     return 0;
// }



