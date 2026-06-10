#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){

// Q.1 find th total number of pair in the array whoose sum is equal
// to the given value x.
// int array[]={3,4,6,7,1};
// int targetsum=7;
// int size=5;
// int pairs=0;
//  for (int i=0;i<size;i++){
//     for(int j=i+1;j<size;j++){
// if(array[i]+array[j]==targetsum){
//      pairs++;
// }
//     }
//  }
// cout<<pairs<<endl;

// Q.2 count the  number of triplet , whoose sum is equal to the given value x//

//  int array[]={3,1,2,4,0,6};
//  int targetsum=5;
//  int size=6;
//  int pairs=0;
//  for(int i=0;i<size;i++){
//     for(int j=i+1;j<size;j++){
//         for(int k=j+1;k<size;k++){
//             if(array[i]+array[j]+array[k]==targetsum){
//                 pairs++;
//             }
//         }
//     }
//  }
//     cout<<pairs<<endl;

// Q.3 find the unique number in a given array where all the element are being 
//repeated twice with one value being unique .....//

//  int array[]={2,3,1,3,2,4,4,5,1,51};
//  int size=10;
//  for(int i=0;i<size;i++){
//     for(int j=i+1;j<size;j++){
//         if(array[i]==array[j]){
//             array[i]=array[j]=-1;
//         }
//     }
//  }
// for(int i=0;i<size;i++){
//     if(array[i]>0){
//         cout<<array[i]<<endl;
//     }
// }

// Q.3  Rotate the given array 'a' by k steps , where k is non- negative //
//  int array[]={1,2,3,4,5,};

// int n=5;
// int k=4;
// //k can be greated than n 
// k=k%n;
// int ansarray[5]; // extra memory are used in this code 
//                  // can u optimize this code 
                 
// int j=0;
// // inserting last k element in ans array //
// for(int i=n-k;i<n;i++){
//  ansarray[j++]=array[i];
// }
// //inserting first n-k element in ans array//
// for(int i=0;i<=k;i++){
//    ansarray[j++]=array[i];
// }
// for(int i=0;i<n;i++){
//     cout<<ansarray[i]<<" ";
// }
// cout<<endl;

       //*********  METHOD -02  */
 
      // REVERSE -->> INBUILD VECTOR //
// vector<int>v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);


// int k=2;
// k=k%v.size();

// reverse(v.begin(),v.end());
// reverse(v.begin(),v.begin()+k);
// reverse(v.begin()+k,v.end());

// for(int a:v){
//     cout<<a<<" ";
// }
//  cout<<endl;

 // Q.5 Given Q quries , check if the given number is present in
 // the array or not 
 // Note:Value of all the element in the array is less than
 // 10 to the power 5 ..//

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

















    return 0;
}