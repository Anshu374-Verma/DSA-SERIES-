 /***   Today Goals Vector  */
 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
//  vector<int>v;
//  cout<<"Size :"<<v.size()<<endl;
//  cout<<"Capacity :"<< v.capacity()<<endl;

//  v.push_back(1);
//  cout<<"Size :"<<v.size()<<endl;
//  cout<<"Capacity :"<< v.capacity()<<endl;
// v.push_back(2);
//  cout<<"Size :"<<v.size()<<endl;
//  cout<<"Capacity :"<< v.capacity()<<endl;

// v.push_back(3);
//  cout<<"Size :"<<v.size()<<endl;
//  cout<<"Capacity :"<< v.capacity()<<endl;

// v.resize(5);
//  cout<<"Size :"<<v.size()<<endl;
//  cout<<"Capacity :"<< v.capacity()<<endl;

// v.resize(10);
//  cout<<"Size :"<<v.size()<<endl;
//  cout<<"Capacity :"<< v.capacity()<<endl;

// v.pop_back();
// v.pop_back();

   //************* LOOPING IN VECTOR  */
//    vector<int>v;
//    int i;
//    // loop
//    for(int i=0;i<5;i++){
//     int element;
//     cin>>element;
//     v.push_back(element);

//    }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
//      v.insert(v.begin()+2,6);
// // for each loop
// for(int ele:v){
//     cout<<ele<<" ";
// }
// cout<<endl;
// v.erase(v.end()-2);
//    // While Loop// 
//    int idx=0;
//    while(idx<v.size()){

// cout<<v[idx++]<<" ";
//    }
      
//***        FIND THE LAST OCCURRENCE OF AN ELEMENT X IN A GIVEN ARRAY */

//  vector<int >v(6);
//  for(int i=0;i<6;i++){
//     cin>>v[i];
//  }
// cout<<"Enter x:";
// int x;
// cin>>x;

// int occurance = -1 ;
// for(int i=0;i<v.size();i++){
//     if(v[i]==x){
//         occurance=i;
//     }
// }
//  cout<<occurance<<endl;

//****  METHOD 02 */
// vector<int >v(6);
//  for(int i=0;i<6;i++){
//     cin>>v[i];
//  }
// cout<<"Enter x:";
// int x;
// cin>>x;

// int occurance = -1 ;
// for(int i=v.size()-1;i>=0;i--){
//     if(v[i]==x){
//         occurance=i;
//         break;
//     }
// }
//  cout<<occurance<<endl;

   //***  Count the number of Occurrences of a particular element x ... */

//    vector<int>v(6);
//  for(int i=0;i<6;i++){
//     cin>>v[i];
//  }
//  int occurance =0;
//  cout<<"Enter the x :";
//  int x;
//  cin>>x;
//  for(int i=0;i<v.size();i++){
//     if(v[i]==x){
//         occurance ++;

//     }
//  }
//  cout<<occurance;

//**   Count the number of element strictly greater than value x  */
 // 2,3,5,6,7//
//  vector<int>v(5);
//  for(int i=0;i<v.size();i++){
//     cin>>v[i];
//  }
//  cout<<"Enter the X:";
//  int x;
//  cin>>x;
//  int count=0;
//  for(int i=0;i<v.size();i++){
//     if(v[i]>x){
//        count++;
//     }
//  }
// cout<<count<<endl;

  //** CHECK IF THE GIVEN ARRAY IS SORTED OR NOT  */
//  int arr[]={1,3,63,4,5};

//  bool sortedflag=true;

//  for(int i=1;i<5;i++){
//     if(arr[i]<=arr[i-1]){
//         sortedflag=false;
//     }
    
//     }
//     cout<<sortedflag<<endl;
  int array[]={1,2,1,2,1,2};
  int anssum=0;
 for (int i=0;i<=6;i++){
   if(i%2==0){
      anssum=anssum+array[i];
   }
   else{
      anssum=anssum-array[i];
   
   }
}
cout<<anssum<<endl;
    return 0;
 }