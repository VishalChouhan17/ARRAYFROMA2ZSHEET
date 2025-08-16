#include <bits/stdc++.h>
using namespace std;
//in this problem we have to arrange unique elements 
// in same array and after that we have to return that unique elements.
// int main(){
// int arr[]={32,3,35,1,32,2,1,3,1};
// int n=9;
// set<int> st;
// for(int i=0;i<n;i++){//t.c=n;
//     st.insert(arr[i]);//t.c=logn
// }

// int idx=0;
// for(int it:st){
//     arr[idx]=it;
//     idx++;
// }
// cout<<idx;


// //total timec. 0(nlogn+n);
// //space comp. 0(n);
int main(){

 int  arr[]={2,3,3,4,5,5,6,6,6};
 int n=9;
 int i=0;
 for( int j=1;j<n;j++){
   if(arr[i]==arr[j]){
       
   }
   
    else if(arr[i]!=arr[j]){
        swap(arr[j],arr[i+1]);
        i++;

    }
 }

cout<<i+1;







}