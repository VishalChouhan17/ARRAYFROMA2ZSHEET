#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={34,67,3,678,4};
    int n=5;
  for(int i=1;i<n;i++){
   arr[i-1]=arr[i];
  
  }
  arr[n-1]=temp;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }





}