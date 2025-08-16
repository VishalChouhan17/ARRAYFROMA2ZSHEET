#include <bits/stdc++.h>
using namespace std;

int secsmall(int arr[],int n){
    int small=arr[0],secsmallest=INT_MAX;
    for(int i=1;i<n;i++){
       if(arr[i]<small){
        secsmallest=small;
        small=arr[i];
       }
       else if(arr[i]>small && arr[i]<secsmallest){
          secsmallest=arr[i];
       }


    }
    return secsmallest;




}
int main(){
int arr[]={3,4,23,12,578,335};
int n=6;
cout<<secsmall(arr,n);






}