// Problem Pattern - Range Sum 




// Problems - 

// 1. Check if all integers in a range are covered
// 2. Corporate flight bookings
// 3. Range Sum Query 2D - Immutable (not solved but it's on leetcode) 


#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
 
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

// -----------------------------------------------------------------------------------------------------------------

// Problem Statement - 

// Given 2D integer array ranges where range i means [li,ri] inclusive. Also we have given two integers left and right 

// Return true if there exists atleast one internval whose all elements satisfies this is_rvalue_reference

// left <= x <= right



// Constraints

// 1 <= ranges.length <= 50
// 1 <= li <= ri <= 50
// 1 <= left <= right <= 50


//Approach 1 -  O(n^2)


// bool solve(ll left,ll right,vector<vll>& ranges){

    
//     for(int i=left; i<= right;i++){

//         //now figure out if this i lies in any of the intervakl range


//         bool flag = false;
//         for(auto range:ranges){

//             if(range[0] <= i && range[1] >= i){
//                 flag = true;
//                 break;
//             }

//         }

//         if(flag == false) return false;
//     }

//     return true;
// }


//Approach 2 - Using difference array


// bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
//         vector<int> interval(52,0);//consider if right of any trange is 50 then we have tp mark 51 -1 right

//         //maintain a difference array
//         for(auto range:ranges){

//             int l = range[0];
//             int r = range[1];

//             interval[l] += 1;
//             interval[r+1] -= 1;
//         }

//         //mainatin a predfix sum

//         for(int i=1;i<52;i++) interval[i] += interval[i-1];

//         for(int i=left;i<=right;i++){
//             if(interval[i] < 1) return false;//because this is not covererd by any of the range
//         }

//         return true;
// }

// int main(){

//     ll n;
//     cin>>n;

//     vector<vll> ranges(n,vll(2));

//     for(int i=0;i<n;i++){

//         cin>>ranges[i][0]>>ranges[i][1];
//     }

//     ll left,right;
//     cin>>left>>right;

//     if(solve(left,right,ranges)){

//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }
//     return 0;
// }



// --------------------------------------------------------------------------------------------------------------------

// Problem 2 - Corporate flight bookings


// There are n flights numbered from 1 to n. 
// You are given a 2D integer array bookings where bookings[i] = [firsti,lasti,seatsi] indicates that seastsi seats
// were booked on every fligh from firsti to lasti(inclusive)
// Return an array answer of length n where answer[i] represents the total number of seats booked on flighi.



// vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        

//         vector<int> flights(n+2,0);

//         for(auto booking:bookings){

//             int first = booking[0];
//             int last = booking[1];
//             int seats = booking[2];
//             flights[first] += seats;
//             flights[last+1] -= seats;
//         }

//         //now take the prefix sum of this difference array and then you will get the nuber of resserved seats for each dflight

//         for(int i=1;i<flights.size();i++){
//             flights[i] += flights[i-1];
//         }

//         vector<int> res(n);

//         for(int i=1;i<=n;i++){
//             res[i-1] = flights[i];
//         }

//         return res;
// }