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

