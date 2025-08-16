#include <bits/stdc++.h>
using namespace std;
// brute force
    int inversionCount(int arr[],int n) {
    
        vector<pair<int,int>> vec;
    
       
       
       for(int i=0;i<n-1;i++){
       
       int rp=i+1;
       while(rp<n){
           
           
        if(arr[rp]<arr[i]) {
            vec.push_back({arr[i],arr[rp]});
            rp++;
        }   
        else{
            rp++;
        }
        
           
       }
       }


       
       
       
       
       
         
        return vec.size();
    }
    int main(){

       int arr[]={2,3,4,1,4,7,5};
       int n=7;
       cout<<inversionCount(arr,n);





    }