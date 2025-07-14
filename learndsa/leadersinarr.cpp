#include <bits/stdc++.h>
using namespace std;
int main(){
//leader is element which is greater from all elements in its right
//brute force
// int arr[]={3,4,15,7,1,6,3,2};
// int n=8;

// vector<int> vec;
// for(int i=0;i<n;i++){
//     bool leader=true;
//     for(int j=i+1;j<n;j++){
//         if(arr[j]>arr[i]){
//             leader=false;
//         }

//     }
//     if(leader){
//         vec.push_back(arr[i]);
//     }
// }
// for(auto it:vec){
//     cout<<it<<" ";
// }

//optimal solution by iterating from last and comparing with greater in rightof every element.
//time comp-0(n)
int arr[]={3,4,15,7,1,6,3,2};
int n=8;
int j=1;
vector<int> ans;

int maxi=INT_MIN;

for(int i=n-1;i>=0;i--){

if(arr[i]>maxi){
    ans.push_back(arr[i]);
}
maxi=max(maxi,arr[i]);

}
// sort(ans.begin(),ans.end());
for(auto it:ans){
    cout<<it<<" ";
}




}













