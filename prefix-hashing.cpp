#include<bits/stdc++.h>

using namespace std;

// Problem 1 - Find the longest subarray equals k
// Prefix array + hashing



// int solve(vector<int>& arr,int n,int k){

//     unordered_map<int,int> mpp;

//     int sum = 0;

//     mpp[0] = -1;//think that the complete subarray sum equals to k

//     int maxLen = INT_MIN;
    
//     for(int i=0;i<n;i++){
//         sum += arr[i];

//         int target = sum - k;

//         if(mpp.count(target)){
//             //it means we have seen target before it means us index se lekar,
//             maxLen = max(maxLen, i - mpp[target]);
//         }
        
//         mpp[sum] = i;
//     }

//     return maxLen;
// }
// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);

//     for(int i=0;i<n;i++) cin>>arr[i];
//     int k;
//     cin>>k;
//     cout<<solve(arr,n,k);
// }


// Problem 2 - Find the longest subarray in which the even count and the odd count is similar

// int solve(vector<int>& arr,int n){

//     //here we are going toe store even - odd in the hashmap and going to take prefix sum of even and odd too

//     //instead of creating two variables i have created only one varibale
//     unordered_map<int,int> mpp;
//     int evenOddDiff = 0;
//     mpp[0]= -1;
//     int maxLen = INT_MIN;
//     for(int i=0;i<n;i++){

//         if(arr[i] % 2 == 1){
//             //odd 
//             evenOddDiff--;
//         }
//         else{
//             //even
//             evenOddDiff++; //because even will be 1 greater than the odd
//         }

//         if(mpp.count(evenOddDiff)){
//             //it means it has come before so the array is having even and odd count (mpp[evenOddDiff],i]
//             maxLen = max(maxLen, i - mpp[evenOddDiff]);
//         }
//         else{
//             mpp[evenOddDiff] = i;
//         }
//     }

//     return maxLen;
// }
// int main(){

//     int n;
//     cin>>n;
    
//     vector<int> arr(n);

//     for(int i=0;i<n;i++) cin>>arr[i];

//     cout<<solve(arr,n);
//     return 0;
// }