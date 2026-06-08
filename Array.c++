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
  char vowels[5];
//   for(int i=0;i<5;i++){
//     cin>>vowels[i];
//   }
//    for(int i=0;i<5;i++){
//     cout<<vowels[i]<<endl;
//   }

for(char element:vowels){
  cin>>element;
}












    return 0;
 }