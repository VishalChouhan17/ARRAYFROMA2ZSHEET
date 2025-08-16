#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[]={1,2,3,4,5,6,8,4};
int n=8;
int idx=-1;

for(int i=n-2;i>=0;i--){
if(arr[i]<arr[i+1]){
    idx=i;
    break;
}


}



if(idx==-1){
    reverse(arr,arr+n);
}




else{
for(int i=n-1;i>=idx;i--){
    if(arr[i]>arr[idx]){
        swap(arr[i],arr[idx]);
        break;
        
    }
}

reverse(arr+idx+1,arr+n);
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}













}