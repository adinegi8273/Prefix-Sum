#include<bits/stdc++.h>

using namespace std;

// Problem 1 - Longest Subsequence With Limited Sum

// Problem Statement - You are given an integer array nums of length n, and an integer array queries of length m.

// Return an array answer of length m where answer[i] is the maximum size of a subsequence that you can take from nums such that the sum of its elements is less than or equal to queries[i].

// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

/*

Example 1:

Input: nums = [4,5,2,1], queries = [3,10,21]
Output: [2,3,4]
Explanation: We answer the queries as follows:
- The subsequence [2,1] has a sum less than or equal to 3. It can be proven that 2 is the maximum size of such a subsequence, so answer[0] = 2.
- The subsequence [4,5,1] has a sum less than or equal to 10. It can be proven that 3 is the maximum size of such a subsequence, so answer[1] = 3.
- The subsequence [4,5,2,1] has a sum less than or equal to 21. It can be proven that 4 is the maximum size of such a subsequence, so answer[2] = 4.
Example 2:

Input: nums = [2,3,4,5], queries = [1]
Output: [0]
Explanation: The empty subsequence is the only subsequence that has a sum less than or equal to 1, so answer[0] = 0.
 

Constraints:

n == nums.length
m == queries.length
1 <= n, m <= 1000
1 <= nums[i], queries[i] <= 106*/

// int binarySearch(int q,vector<int>& prefix,int n){

//     int low = 0,high = n-1;
//     int ans = -1;
//     while(low <= high){

//         int mid = low + floor((high-low)/2);

//         if(prefix[mid] > q){
//             ans = mid;//i want the first greater than q index because that will sigi=nify hiow many nujber s are in maximum suseq
//             high = mid-1;
//         }
//         else{
//             //in the case of equality also prefix[mid] == q also
//             low = mid+1;//maximize the nuumber of elements
//         }
//     }
//     return ans;
// }
// vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        

//     sort(nums.begin(),nums.end());
//     int n = nums.size();
//     vector<int> prefix(n,0);

//     prefix[0] = nums[0];
//     for(int i=1;i<n;i++){
//         prefix[i] = prefix[i-1] + nums[i];
//     }

//     vector<int> res;
//     for(int q:queries){

//         //apply a bianry search on prefix for the first position that is greater than q
//         int ans = binarySearch(q,prefix,n);
//         if(ans == -1){
//             res.push_back(n); //all of the elements are lesser than q
//         }
//         else res.push_back(ans);
        
//     }

//     return res;

//     //time complexity is O(q * logn)
//     //Space complexity is O(n)
// }


// ---------------------------------------------------------------------------------------------------------------------------

// Problem Statement 2 - Unique Length-3 Palindromic Subsequences

// Given a string s, return the number of unique palindromes of length three that are a subsequence of s.

// Note that even if there are multiple ways to obtain the same subsequence, it is still only counted once.

// A palindrome is a string that reads the same forwards and backwards.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".
 

// Example 1:

// Input: s = "aabca"
// Output: 3
// Explanation: The 3 palindromic subsequences of length 3 are:
// - "aba" (subsequence of "aabca")
// - "aaa" (subsequence of "aabca")
// - "aca" (subsequence of "aabca")
// Example 2:

// Input: s = "adc"
// Output: 0
// Explanation: There are no palindromic subsequences of length 3 in "adc".
// Example 3:

// Input: s = "bbcbaba"
// Output: 4
// Explanation: The 4 palindromic subsequences of length 3 are:
// - "bbb" (subsequence of "bbcbaba")
// - "bcb" (subsequence of "bbcbaba")
// - "bab" (subsequence of "bbcbaba")
// - "aba" (subsequence of "bbcbaba")
 

// Constraints:

// 3 <= s.length <= 105
// s consists of only lowercase English letters.

// int countPalindromicSubsequence(string s) {
        
//         int n = s.size();
//         vector<int> alpha(26,0);

//         for(char ch:s){

//             alpha[ch - 'a']++;
//         }
        
//         int cnt = 0;
//         for(int j=0;j<26;j++){
            

//             if(alpha[j] == 0) continue;
            
//             char ch = 'a' + j;
//             unordered_map<char,int> mpp;
//             bool flag = false;//this will be used to determine whether the character has occured in between its own occurence or
//             for(int i=0;i<n;i++){

//                 if(s[i] == ch){
                   
//                     alpha[ch - 'a']--;

//                     if(mpp.count(ch) && alpha[ch - 'a'] != 0) flag = true;

//                     mpp[ch] =1;//mark it so as to  start count number of distict in between its similar ocurences
//                 }
//                 else if(mpp.count(ch)){

//                     //agar ch aa chuka hai uske baad hi count karo
//                     mpp[s[i]] = 1;
//                 }
//                 if(alpha[ch-'a'] == 0) break;
//             }

//             cnt += (mpp.size()-1);

//             if(flag == true) cnt += 1;
//         }
//         return cnt;
// }

// -------------------------------------------------------------------------------------------------------------------------

// Problem Statement 3- Count palliondromic Subsequences

// Given a string s, your task  is to count the total number of pallindromic subsequences present in the string.


// Example

// Input - abc
// Output - 3

// Input - aaa
// Output - 7

// Constraints - 

// 1 <= s <= 1000
// string s only contains the lowercase letters

// int main(){

//     string s;
//     cin>>s;

//     cout<<countPalindromicSubsequence(s);
//     return 0;
// }


