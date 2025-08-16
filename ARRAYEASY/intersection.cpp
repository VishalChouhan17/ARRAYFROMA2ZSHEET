#include <bits/stdc++.h>
using namespace std;
int main(){
    //we have two sorted arrays
    //first we proceed through brute force by checking elements of both arrays.
// int arr1[]={1,2,3,2,4,5,6,7,8};
// int arr2[]={2,4,5,6,6,8,9,10};
// vector<int> vec;
// int n1=9;
// int n2=8;
// for(int i=0;i<n1;i++){
//  for(int j=0;j<n2;j++){
//     if(arr1[i]==arr2[j] ){
//     if(vec.size()==0 || vec.back()!=arr1[i] ){
//         vec.push_back(arr1[i]);
//     }
    
//     }
//  }


// }
// for(auto it:vec){
//     cout<<it<<" ";
// }


// }
int arr1[]={1,2,3,2,4,5,6,6,7,8};
int arr2[]={2,4,5,6,6,8,9,10};
int n1=9;
int n2=8;
int i=0;
int j=0;
vector<int> vec;
while(i<n1 && j<n2){
if(arr1[i]==arr2[j]){
    if(vec.size()==0 || vec.back()!=arr1[i]){
   vec.push_back(arr1[i]);}
   i++;
   j++;
    

}
else if(arr1[i]<arr2[j]){//example if arr1<arr2 then in sorted array we never get 1 in array2
    i++;
}
else {//if arr2[]<arr1[]
    j++;
}
}
for(auto it:vec){
    cout<<it<<" ";
}
}