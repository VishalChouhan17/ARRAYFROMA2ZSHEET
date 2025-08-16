#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[]={2,1,1,3,-3,4,7};
int n=7;
int sum=0;
int maxl=0;
unordered_map<int,int> st;
for(int i=0;i<n;i++){
     sum+=arr[i];
     if(sum==0)maxl=i+1;//longest length till now
     
     else {if(st.find(sum)!=st.end()){
            maxl=max(maxl,i-st[sum]);
     }
     else{
        st[sum]=i;
     }

}






}
cout<<maxl;
}