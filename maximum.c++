#include<iostream>
using namespace std;
int main(){
   
//     int a,b,c;
//      cout<<"Enter the first number ";
//      cin>>a;
//       cout<<"Enter the second number ";
//      cin>>b;
//       cout<<"Enter the thired  number ";
//      cin>>c;
// if(a>b && a>c){
//     cout<<"maximum number is : "<<a<<endl;

// }
// else if(b>c && b>a){
//     cout<<"Maximum number is :"<<b<<endl;
// }
// else {
//     cout<<"Maximum number is :"<<c<<endl;
// }
  
//    int a,b;
//    cout<<"Enter the num1 ";
//    cin>>a;
//  cout<<"Enter the num2  ";
//    cin>>b;

//    char ch;
//    cout<<"enter the operator ";
//    cin>>ch;
//    switch(ch){
//     case '+':
//          cout<< "Addition:"<< a+b;
//          break;
//     case '-':
//          cout<< "Substraction :"<< a-b;
//           break;
//     case '*':
//          cout<< "Multiplication:"<< a*b;
//          break;
//     case '/':
//          cout<< "Division :"<< a/b;3
//          break;
//     default:
//          cout<<"involid ";
//    }

//  int n;
//  cout<<"Enter the number ";
//  cin>>n;
//  int sum=0;
// int i=1;

//  while(i<=n){
//     sum=sum+i;36
//     i++;
//  }
//  cout<<"Sum of n natural number "<<sum;


// int n ,sum=0;
// cout<<"Enter the number ";
// cin>>n;
//  for(int i=1;i<=n;i++){
//  sum=sum+i;

//  }
//  cout<<sum;
// int i=5;
// while(true){
//     if(i%7==0){
//         cout<<i<<endl;
//         break;
//     }
//     i+=5;
// }
int n ;
cin>>n;
int sum=0;

 do{
    int num;
    cin>>num;
    int sum=sum+num;
    n--;
 }while(n>0);
cout<<sum <<endl;
    return 0;
}