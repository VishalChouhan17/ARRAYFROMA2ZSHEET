#include <bits/stdc++.h>
using namespace std;
//in 3 sum we have to find three numbers so we get n1+n2+n3=0
//array should be sorted
//we use two pointrs  pointers  j and k and i is fixed;
// i points to first j points to mid   k pints to last index 
//optimal time comp 0(nlogm) +0(n^2)=0(n^2) space complexity =logn bc inplacesort 
int main(){
int arr[]={0,-1,-1,1,-1,-2,-2,0,0,2,3,2};
int n=12;
sort(arr,arr+n);
vector<vector<int>> ans;
for(int i=0;i<n;i++){
    int j=i+1;
    int k=n-1;
   
    
  
    if(i>0 && arr[i]==arr[i-1]){//skip duplicate 
        continue;
    }
    while(j<k){
          int sum=arr[i]+arr[j]+arr[k];
        if(sum>0){//since its sorted so we we move k towards less value
            k--;
        }
        else if(sum<0){
            j++;
        }
        else{
          
            ans.push_back({arr[i],arr[j],arr[k]});
        
            j++;
            k--;
            while( j<k && arr[j-1]==arr[j])j++;//skip duplicate for j
            while(j<k && arr[k+1]==arr[k])k--;//skip duplicate for k
        }

    }

}

for(auto it:ans){
    for(auto num:it){
        cout<<num;
    }
    cout<<" ";
}






}
