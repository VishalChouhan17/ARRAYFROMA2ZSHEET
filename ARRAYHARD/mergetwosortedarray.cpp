#include <bits/stdc++.h>
using namespace std;
int main(){
//optimal without extra space;
vector<int> arr1={1,2,4,5};
int m=arr1.size();
vector<int> arr2={0,2,3};
int n=3;
int left=m-1,right=0;
while(left>=0 && right<n){
    if(arr1[left]>arr2[right]){
        swap(arr1[left],arr2[right]);
        left--,right++;
    }
    else{
        break;
    }
}
sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
for(int i=0;i<m;i++){
    cout<<arr1[i]<<" ";
}
for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";
}













}