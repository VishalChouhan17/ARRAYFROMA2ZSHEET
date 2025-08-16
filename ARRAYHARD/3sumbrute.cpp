#include <bits/stdc++.h>
using namespace std;
int main(){

// in 3 sum we have to chose three  numbr so that a+b+c=0;
//we use two pointers pointing on two differnt index and store value in set between this pointers
// if we found 
int arr[]={3,1,-2,-1,-3,-2,4};
int n=7;
rime comp=0(n^2.log(m));
set<vector<int>> st;//sotres unique pairs of triplet
for(int i=0;i<n;i++){
 
 set<int> hashset;//storing -(arr[i]+arr[j]) 

    for(int j=i+1;j<n;j++){
    
   int third=-(arr[i]+arr[j]);
   if(hashset.find(third)!=hashset.end()){//if third is previously stored as arr[j]
      vector<int> temp;
      temp={arr[i],arr[j],third};
      sort(temp.begin(),temp.end());
      st.insert(temp);

   }

  hashset.insert(arr[j]);//every time we store 

}

}


vector<vector<int>> ans(st.begin(),st.end());
for(auto it:ans){
  for(auto num:it){
    cout<<num<<" ";
  }
}





}