#include <bits/stdc++.h>
using namespace std;
int main(){
// int arr[]={1,3,1,2,1,2,1,1};
// int n=8;
// int sum=6;
// int len=0;
//brute approach by finding subarray with given sum and max length of thst subar.
// for(int i=0;i<n;i++){
//     int sum1=0;
//  for(int j=i;j<n;j++){
    
//     sum1+=arr[j];
//    if(sum1==sum){
//         len=max(len,j-i+1);
//     }


//  }
  

// }
// cout<<len<<endl;

// }
//optimal solution by two pointer
//only work if array contains positive and zeroes


int arr[]={1,3,1,2,1,2,1,1};
int n=8;
int k=6;
int low=0;
int high=0;
int len=0;
int sum=arr[0];
while( high<n){
while(low<=high && sum>k){
   sum-=arr[low];
   low++;
}

if(sum==k){
   len=max(len,high-low+1);
}
    high++;
 if(high<n){sum+=arr[high];
 }
  
}


cout<<len;
}