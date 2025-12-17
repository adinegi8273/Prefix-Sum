// Problem Pattern - Range Sum 




// Problems - 

// 1. Check if all integers in a range are covered
// 2. Corporate flight bookings


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


//Approach 2 - 

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



