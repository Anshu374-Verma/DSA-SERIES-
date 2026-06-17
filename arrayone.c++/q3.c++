// given a vector arr[] sorted in increasing order of n size and an integer x, find 
//  a pair in the array whoose absolute difference is  exactly x.
#include<iostream>
using namespace std;
int main(){
 
    int arr[]={5,10,15,20,26};
    int n=5;
    int i=0,j=1;;
    int x=8;
    bool found=false;
    while(i<n&&j<n){
        if(abs(arr[i]-arr[j])==x){
            found=true;
            break;
        }
        else if(abs(arr[i]-arr[j])<x){
              j++;
        }
        else{
            i++;
        }

    }

    if(found==true){
        cout<<"YES";

    }else{
        cout<<"NO";
    }









    return 0;
}
