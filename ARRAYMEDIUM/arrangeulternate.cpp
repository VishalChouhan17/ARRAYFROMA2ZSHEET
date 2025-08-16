#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={-1,3,-4,-2,-8,4,5,6};
int  n=8;
vector<int> ans(n,0);
 int pos=0,neg=1;
     

  for(int i=0;i<n;i++){
          if(arr[i]>0){
           ans[pos]=arr[i];
           pos+=2;
          }
          else if(arr[i]<0){
           ans[neg]=arr[i];
           neg+=2;
          }


         }
        
      for(auto it:ans){
        cout<<it<<" ";
      }
      



         

     

        


    }


















