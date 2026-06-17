#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int runningSum(vector<int>&v){
//   for(int i=1;i<v.size();i++){
//     v[i]=v[i-1]+v[i];
//   }
// return 0 ;
// }
// int main(){
// int n;
// cin>>n;
// vector<int>v;
//  for(int i=0;i<n;i++){
//     int ele;
//     cin>>ele;
//     v.push_back(ele);
//  }
//    runningSum(v);
//    for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//    }cout<<endl;

/* Q.2 check if we can partition the array into two subarray
(part of the array) with two equal . more formally check that the prefix 
sum of a part of the array is equal to the suffix sum of rest 
of the array */

// bool checkPrefixSuffixSum(vector<int>&v){
//     int total_Sum=0;
//     for(int i=0;i<v.size();i++){
//         total_Sum+=v[i];
//     }
//     int prefix_Sum=0;
//     for(int i=0;i<v.size();i++){
//         prefix_Sum+=v[i];
//         int suffix=total_Sum-prefix_Sum;
//         if(suffix==prefix_Sum){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){

// int n;
// cin>>n;

// vector<int>v;
// for(int i=0;i<n;i++){
//     int ele;
//     cin>>ele;
//     v.push_back(ele);
// }
// cout<<checkPrefixSuffixSum(v)<<endl;

/// Q.3  given an array of integer of size n. Answer q queries where you need 
// to print the sum of value in a given range of indices from i to r(both included)
//notes: The value of i and r in queries follow 1 based indexing 

int main(){
int n;
cout<<"enter th n :";
cin>>n;
vector<int>v(n+1,0);
for(int i=1;i<=n;i++){
    cin>>v[i];
}
//calculate prefix_sum array
for(int i=1;i<=n;i++){
    v[i]=v[i]+v[i-1];
}
int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    int ans=0;
   //ans =prefixsumaray[r]-prefixsumarray[l-1]
   ans=v[r]-v[l-1];
   cout<<ans<<endl;
}








 












    return 0;
}