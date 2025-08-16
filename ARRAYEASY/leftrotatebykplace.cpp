#include <bits/stdc++.h>
using namespace std;
int main(){
   //brute force 
    // int arr[]={3,5,6,7,8,0};
    // int k=1;
   
    // int n=6;
    //  k=k%n;//for every n place we get same array
    // int temp[k];
    // for(int i=0;i<k;i++){
    //   temp[i]=arr[i];
    

    // }
    // for(int i=k;i<n;i++){
    //       arr[i-k]=arr[i];
    // }
    // for(int i=0;i<k;i++){
    //    arr[n-k+i]=temp[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
//optimal approach by revrse k elements then remaining elements then reverse whole array.
 
int arr[]={2,13,5,78,7,8};
    int k=2;
    int n=6;
    
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  

    















}