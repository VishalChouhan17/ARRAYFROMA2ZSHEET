#include <bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[]={1,-3,2,4,-1,3,6,-4};
    int n=8;
   vector<int> pos,neg;
   for(int i=0;i<n;i++){

if(arr[i]>0){
    pos.push_back(arr[i]);
}
else{
    neg.push_back(arr[i]);
}

   }

   if(pos.size()>neg.size()){

    for(int i=0;i<neg.size();i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    int idx=2*neg.size();
    for(int i=neg.size();i<pos.size();i++){
       arr[idx]=pos[i];
       idx++;
    }
   }
   else if(pos.size()==neg.size()){

    for(int i=0;i<neg.size();i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    
   }
   else {

    for(int i=0;i<pos.size();i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    int idx=2*pos.size();
    for(int i=pos.size();i<neg.size();i++){
       arr[idx]=neg[i];
       idx++;
    }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
 }