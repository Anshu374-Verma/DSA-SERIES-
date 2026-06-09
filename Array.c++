// Array --> data structure which store a collection of homogenous (same type elsement in one saath ) items
 // -->> contiguous memeory
 #include<iostream>
 using namespace std;
 int main(){
//  int array[]={1,2,3,4};
// // cout<<sizeof(array)<<endl;
// // cout<<sizeof(array)/sizeof(array[0])<<endl;
// int size=sizeof(array)/sizeof(array[0]);
// //Traversing the Array 
// for(int i=0;i<size;i++){
//     cout<<array[i]<<endl;

// }
// // for eachloop
// for(int ele:array){
//     cout<<ele<<endl;
// }
//*****                INPUT OF THE ARRAY  */
  // char vowels[5];
//   for(int i=0;i<5;i++){
//     cin>>vowels[i];
//   }
//    for(int i=0;i<5;i++){
//     cout<<vowels[i]<<endl;
//   }

// for(char &element:vowels){
//   cin>>element;
// }
// for(int idx=0;idx<5;idx++){
//   cout<<vowels[idx]<<" ";
// }
// Question : calculate the sum of all the elements in the given array 

//   int array[]={3,4,10,11};
//   int size=sizeof(array)/sizeof(array[0]);

//   int sum=0;
// for(int i=0;i<size;i++){
//   sum +=array[i];
// }
// cout<<sum<<endl;

//Ouestion : Find the maximum number of the array 
// int array[]={13,4,10,11};
// int min;
// int size=sizeof(array)/sizeof(array[0]);
//  min=array[0];
// for(int i=0;i<size;i++){
//   if(array[i]< min){
//     min =array[i];
//   }
// }
//  cout<<min<<endl;

  //************************************   LINEAR SEARCH     */

   int array[]={3,9,18,11,7};
   int size=sizeof(array)/sizeof(array[0]);
   int key=7;
   int ans=-1;
   for(int i=0;i<size; i++){
    if(array[i]==key){
      ans=i;
    }
   
   }
   cout<<ans<<endl;

    return 0;
 }