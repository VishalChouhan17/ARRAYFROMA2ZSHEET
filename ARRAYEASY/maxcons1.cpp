#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[]={1,0,1,1,1,0,1,1,0};
int n = 9;
int cnt=0;
int max1=0;
for(int i=0;i<n;i++){
  if(arr[i]==1){
    cnt++;
    // if(max1<cnt){
    //     max1=cnt;
    // }
 
  }
  else{cnt=0;

  }
  if(max1<cnt){
    max1=cnt;
  }

}
cout<<max1;










}