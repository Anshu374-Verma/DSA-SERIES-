//Q.1 Sort an array consisting of only os and 1s//

// #include<iostream>
// #include<vector>
// using namespace std;
// void sortZeroesAndOnes( vector<int>&v){

// int left_ptr=0;
// int right_ptr=v.size()-1;
// while(left_ptr<right_ptr){
//     if(v[left_ptr]==1 && v[right_ptr]==0){
//         v[left_ptr++]=0;
//         v[right_ptr--]=1;

//     }
//     if(v[left_ptr]==0){
//         left_ptr++;
//     }
//     if(v[right_ptr]==1){
//         right_ptr--;
//     }
// }
// return ;
// }




    //     int zeroCount=0;

//     for (int ele:v){
//         if(ele==0){
//             zeroCount++;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<zeroCount){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }

// }
// int main(){
//  int n;
//  int ele;
//  cout<<" enter ele:" ;
//  cin>>n;
//  vector<int>v;

//  for(int i=0;i<n;i++){
//     int ele; cin>>ele;
//     v.push_back(ele);
//  }

//  sortZeroesAndOnes(v);
//  for (int i = 0; i < n; i++)
//  {
//       cout<<v[i]<<" ";
//  }
//  cout<<endl;
 // Question :2 //Q.1 Sort an array consisting of even and odd
  //and even at begining of the arrayfollowed by alll the odd integer//

// void SortEvenOdd(vector<int>&v){
//     int left_ptr=0;
//     int right_ptr=v.size()-1;
//     while(left_ptr<right_ptr){
//         if(v[left_ptr]%2==1 && v[right_ptr]% 2==0){
// swap(v[left_ptr],v[right_ptr]);
// left_ptr++;
// right_ptr--;
        

//         }
//         if(v[left_ptr]%2==0){
//             left_ptr++;

//         }
//         if(v[right_ptr]%2==1){
//             right_ptr--;
//         }
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"enter the n :";
//     cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
//     int ele;
//     cin>>ele;
//     v.push_back(ele);
// }

// SortEvenOdd(v);

// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
  
//Q.3 Given an integer array 'a sorted' in non-deceasing 
//order , return an array of the square of each number sorted 
//in non-decreasing order.
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void sortedSquaredArray(vector<int>&v){
    vector<int>ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;

while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
ans.push_back(v[right_ptr] * v[right_ptr]);
right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
 reverse(v.begin(),v.end());
 for(int i=0;i<v.size();i++){
    cout<<ans[i]<<" ";
 } 
 cout<<endl;
}     


int main(){

int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);

}
sortedSquaredArray(v);

    return 0;
}
