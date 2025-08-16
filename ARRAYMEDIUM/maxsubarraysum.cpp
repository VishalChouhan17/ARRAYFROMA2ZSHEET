#include <bits/stdc++.h>
 using namespace std;
 //brute approach
 int main(){
    int arr[]={-2,3,4,-1,-2,1,5,-3};
    int n=8;
    //brute force approach
    //t.c =0(n^2)
    //   int mx=0;
    // for(int i=0;i<n;i++){
           
    //            int sum=0;
    //     for(int j=i;j<n;j++){
           
    //       sum+=arr[j];
        
    //     }
    //     mx=max(sum,mx);
    
        
    //     }
    //     cout<<mx;
     
        
    // }
    // kadanes max sub arraysum t.c0(n)

 int mx=INT_MIN;
 int sum=0;
    
 for(int i=0;i<n;i++){
    sum+=arr[i];
    mx=max(sum,mx);
  if(sum<0){
    sum=0;
  }
  

 }
 cout<<mx;


 }