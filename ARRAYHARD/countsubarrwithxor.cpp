#include <bits/stdc++.h>
using namespace std;
int main(){
//brute t.c=0(n^2)
int arr[]={4,2,2,6,4};
int n=5;
int k=6;

// int cnt=0;
// for(int i =0;i<n;i++){

//    int xr=0;
//   for(int j=i;j<n;j++){
    
//    xr^=arr[j];
//    if(xr==xo)cnt++;


//   }



// }
// cout<<cnt<<endl;

//optimal using hashmap and finding
//we know x^k=xr
//x=xr^k where x is previously stored xor
unordered_map<int,int> mp;
int xr=0;
mp[xr]++;
int cnt=0;
 for(int i=0;i<n;i++){
    xr^=arr[i];
    
    if(mp.find(k^xr)!=mp.end()){
        cnt+=mp[k^xr];
    }
    mp[xr]++;

 }
 cout<<cnt<<endl;









}