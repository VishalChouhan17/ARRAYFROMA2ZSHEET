#include <bits/stdc++.h>
using namespace std;

// bool linears(int arr[],int a){
// int n=8;
// for(int i=0;i<n;i++){
// if(a==arr[i]){
//     return true;
// }



// }
// return false;

// }


// int main(){

// int arr[]={2,4,24,2,53,5,23,22};
// int n=8;
// int longest=1;

// for(int i=0;i<n;i++){
// int a=arr[i];
// int cnt=1;
// while(linears(arr,a+1)==true){
//  cnt+=1;
//  a+=1;
// }
// longest=max(longest,cnt);

// }


// cout<<longest;

// }
int main(){
int arr[]={4,2,4,2,5,53,4,3,2,2,37,1,3};
int n=13;
int longest=0,lastsmall=INT_MIN,currcnt=0;

sort(arr,arr+n);
for(int i=0;i<n;i++){

if(arr[i]-1==lastsmall){
    currcnt+=1;
    lastsmall=arr[i];
}
else if(arr[i]!=lastsmall){
    currcnt=1;
    lastsmall=arr[i];
}
longest=max(longest,currcnt);

}


cout<<longest;












}


















