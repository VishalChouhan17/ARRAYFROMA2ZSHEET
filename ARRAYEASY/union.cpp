#include <bits/stdc++.h>
using namespace std;
int main(){
    //we have to perform union of two arrays in sorted order so we use set

// int arr1[]={31,2,3,2,3};
// int arr2[]={1,2,5,3,6};
// int n=5;
// set<int> st;
// for(int i=0;i<n;i++){
//     st.insert(arr1[i]);//take 0(logn) t.c
//     st.insert(arr2[i]);

// }
// //nlogn
// for(auto it:st){
//     cout<<it<<" ";
// }
int a[]={2,3,42,34,5,7,8};
int b[]={2,3,4,5,6};
int n1=7;
int n2=5;
vector<int> unarr;
int i=0,j=0;
while(i<n1 && j<n2){

    if(a[i]<=b[j]){
        if(unarr.size()==0|| unarr.back()!=a[i]){
               unarr.push_back(a[i]);
        }
        i++;
    }

    
    else{
         if(unarr.size()==0|| unarr.back()!=b[j]){
               unarr.push_back(b[j]);
        }
        j++;

    }
}

while(i<n1 ){
     
        if(unarr.size()==0|| unarr.back()!=a[i]){
               unarr.push_back(a[i]);
        }
        i++;
    }

while(j<n2){
     if(unarr.size()==0|| unarr.back()!=b[j]){
               unarr.push_back(b[j]);
        }
        j++;

}
for(auto it:unarr){
    cout<<it<<" ";
}








}