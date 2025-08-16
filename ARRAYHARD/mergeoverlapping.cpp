#include <bits/stdc++.h>
using namespace std;
int main(){

vector<vector<int>> arr={{2,4},{7,13},{2,3},{8,10},{1,3},{4,2},{15,18},{19,29}};
int n=arr.size();
sort(arr.begin(),arr.end());
vector<vector<int>> ans;

for(int i=0;i<n;i++){
   int st=arr[i][0];
   int end=arr[i][1];

   if(!ans.empty() && end<=ans.back()[1]){
    continue;
   }
   for(int j=i+1;j<n;j++){
    if(arr[j][0]<=end) end=max(end,arr[j][1]);
    else break;
   }
   ans.push_back({st,end});


}


for(auto it:ans){
    for(auto num:it){
        cout<<num<<" ";
    }
    cout<<endl;
}







}