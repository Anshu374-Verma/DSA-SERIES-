#include<iostream>
#include<vector>
using namespace std;
int main(){
   
int n;
cin>>n;
vector<int>v1;
cout<<"enter the array 1: ";
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v1.push_back(ele);
}
int m;
cin>>m;
cout<<"enter the array 2 :";
vector<int>v2;
for(int i=0;i<m;i++){
    int ele;
    cin>>ele;
    v2.push_back(ele);
}
 
int result[m+n];
int i=0;//willl help us to ierate on arr1
int j=0;//will helps us to iterate on arr2
int k=0;//will helps us to iterate on result
while(i<m and j<n){
    //both i and j should be within the limit or arr1 and arr2

if(v1[i]<v2[j]){
    result[k]=v1[i];
    k++;
    i++;
}else{
    result[k]=v2[j];
    k++;
    j++;
}
}
while(i<m){
    result[k]=v1[i];
    i++;
    k++;
}
while(j<n){
    result[k]=v2[j];
    k++;
    j++;
}
 for(int i=0;i<(m+n);i++){
    cout<<result[i]<<" ";
 }



    return 0;
}