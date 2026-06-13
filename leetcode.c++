#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;
// void removeEle(vector<int>&v , int val){
 
   
// int k=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]!=val){
//         v[k]=v[i];
//             k++;
//         }
        
//     }
   
//     cout<< " remaining element : "<< k<<" ";
//    cout<<"actual Array ";
//    for(int i=0;i<k;i++){
//     cout<<v[i]<<" ";
//    }
   
    

// }
// int main(){
// int n;

// cin>>n;
//     vector<int>nums;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//       nums.push_back(ele);
//     }
    
//     int val;
//     cout<<"enter the value:"<<" ";
//     cin>>val;
//     removeEle(nums,val);
//     return 0;
// }
//Q.26. Remove Duplicates from Sorted Array
void  removeDuplicate(vector<int>&nums){
nums.erase(unique(nums.begin(), nums.end()), nums.end());
int k=nums.size();
    for(int i=0;i<k;i++){
     cout<<nums[i]<<" ";
    }
// int k=nums.size();
    cout<<"remaining cout : "<<k;
}
int main(){
vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    removeDuplicate(nums);
    return 0;
}