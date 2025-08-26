//there are two type of case in recursion recursive case and base case.
//sum of n natural no.
#include <bits/stdc++.h>
using namespace std;
//  int sum(int n){

// if(n==0)return 0 ;

//  int sumn = n + sum(n-1);
// return sumn;

// }


// int main(){
    
// int d=3;
// cout<<sum(d);


// }
//2 reverse array
// void ar(int arr[],int n){
// if(n==0)return ;

// cout<<arr[n-1]<<" ";
// ar(arr,n-1);

// }
// int main(){

// int arr[]={14,6,7,8};
// int n=4;
// ar(arr,n);//in function call we pass variable name




// }
//palindrome string recursion
// string str(string s,int n){
//     if(n<0)return "";
//     return string(1,s[n])+str(s,n-1);
// //string of length 1 which stores single character



// }
// int main(){string s;
// getline(cin,s);
// string rev=str(s,s.size()-1);
// if(rev==s){
//     cout<<"true";
// }
// else{
//     cout<<"false";
// }




// }

 
void table(int n,int b){
if(b<=0)return ;
table(n,b-1);
cout<<n*b<<endl;





}
int main(){

int a;
cout<<"enter number";
cin>>a;
table(a,10);


}