#include <bits/stdc++.h>
using namespace std;
// int main(){
//     //brute force 
// int arr[]={2,1,3,44,3,2};
// int n=6;
// int sum=45;

// for(int i=0;i<n;i++){

//     for(int j=i+1;j<n;j++){
//         if(arr[i]+arr[j]==sum){
               //  cout<<i<<" ";
                // cout<<j<<endl;
         
//         }
    
// }
//
// }

//better approach using unordered map 
// unordered_map<int,int> mp;

// for(int i=0;i<n;i++){
//     int a=arr[i];
//     int more=sum-a;
//     if(mp.find(more)!=mp.end()){/if more is present before
//         cout<<i<<mp[more];//presentindex<<index of more
//     }

// mp[a]=i;//we store the element as key and index as value.
// }



// }
//optimal by two pointer approach
vector<int> twosum(int arr[],int sum,int n){
vector<pair<int,int>> vec;
for(int i=0;i<n;i++){
    vec.push_back({arr[i],i});
}


int i=0;
int j=n-1;
while(i<j){
 if(arr[i]+arr[j]==sum){
  return {vec[i].second,vec[j].second};
 }
 else if(arr[i]+arr[j]>sum){
    j--;
 }
 else{
    i++;
 }

}


return {-1,-1};
}

int main(){

int arr[]={1,1,3,4,5,4};
int n=6;
int sum=7;

vector<int> result=twosum(arr,sum,n);
for(auto it:result){
    cout<<it<<" ";
}






}



