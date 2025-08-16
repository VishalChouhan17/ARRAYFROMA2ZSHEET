#include <bits/stdc++.h>
using namespace std;
int main(){

//brute force ,first we sort array and find element fro last which is just smaller than largest element and break;
//time comp is nlogn +n;
// int arr[]={2,1,3,5,3,7,3,7};

// int n=8;
// for(int i=n-1;i>=1;i--){
//     for(int j=0;j<n;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }
// int second=0;
//  for(int i=n-2;i>=0;i--){
//     if(arr[i]<arr[n-1]){
//          second=arr[i];
//          break;
//     }
//  }
// cout<<second;




// }

//better approach 


// int arr[]={2,31,44,31,7,4,32,2332};
// int n=8;
// int largest=arr[0];
// for(int i=0;i<n;i++){

//     if(arr[i]>largest){
//         largest=arr[i];
//     }
// }
// int seclarge=-1;
// for(int i=0;i<n;i++){
// if(arr[i]!=largest&& arr[i]>seclarge){
//     seclarge=arr[i];
    
// }
// }
// cout<<seclarge;
// }


//optimal approach 
int a[]={14,14,790,65,3,332};
int n=6;
int largest=a[0],seclarge=INT_MIN;
for(int i=1;i<n;i++){

    if(a[i]>largest ){
        seclarge=largest;
        largest=a[i];
        
    }
    else if(a[i]<largest && a[i]>seclarge){
        seclarge=a[i];
    }
}
cout<<seclarge;
}
