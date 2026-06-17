/// target sumpair
#include<iostream>
using namespace std;
int main(){


  int arr[]={1,3,3,5};
    int x=6;
  int n=4; /// array ka length

  // code to find if there is a pair with sum x
 int i=0;
 int j=n-1;
 int ans=0;
 while(i<j){
    if(arr[i]+arr[j]==x){
        ans=ans+1;
        i++;
        j--;
    
    }else if(arr[i]+arr[j]<x){
        // sum is leess then x, increase the sum 
        i++;
    }else{
        //summ is more than x, decrease the sum 
        j--;
    }
 }
 cout<<ans;



    return 0;
}
















    