#include <bits/stdc++.h>
using namespace std;
int main(){
    // brute force by checking n/3 times occurence
    int arr[]={3,3,3,1,1,44};
    int n=6;
//     vector<int> vec;

//     for(int i=0;i<n;i++){
//     int cnt=0;
//     for(int j=0;j<n;j++){
//      if(arr[i]==arr[j]){
//         cnt++;
//      }
    


//     }
//     if(cnt>n/3 && find(vec.begin(),vec.end(),arr[i])==vec.end()){//if element already present than not add multiple times
//         vec.push_back(arr[i]);
//     }


//     }
//     for(auto it:vec){
//         cout<<it<<" ";
//     }
// }

//better approach by hashing 
unordered_map<int,int> vec;
for(int i=0;i<n;i++){
    vec[arr[i]]++;
}
for(auto it:vec){
    if(it.second>n/3){
        cout<<it.first<<" ";
    }
}
}