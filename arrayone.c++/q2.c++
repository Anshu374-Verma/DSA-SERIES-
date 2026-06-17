//given a vector arr[] sorted in increasing order of n size and an integer x, find 
// itnthere exists a pair in the array whoose sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[]={-2,-1,0,8,6,8,11,12};
    int x=11;
  int n=8; /// array ka length

  // code to find if there is a pair with sum x
 int i=0;
 int j=n-1;
 bool found=false;
 while(i<j){
    if(arr[i]+arr[j]==x){
        found=true;
        break;
    }else if(arr[i]+arr[j]<x){
        // sum is leess then x, increase the sum 
        i++;
    }else{
        //summ is more than x, decrease the sum 
        j--;
    }
 }
 if (found==true){
    cout<<"yes";
 }else{
    cout<<" NO";
 }



    return 0;
}