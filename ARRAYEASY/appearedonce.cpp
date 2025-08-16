#include <bits/stdc++.h>
using namespace std;
//int main(){
    //int arr[]={1,1,2,3,4,3,4};

   // int n = 7;
  
//     for(int i =0 ;i<n; i++){
//        int num=arr[i];
//        int cnt=0;
//     for(int j=0;j<n;j++){
//         if(num==arr[j]){
//             cnt++;
//         }
//     }
//     if(cnt==1){
//         cout<<arr[i];
//         break;
//     }

    



//
// }

// int main(){
//            int arr[]={1,1,2,3,3,3,4,4};
//            int n=8;
//            int maxi=0;
//            for(int i=0;i<n;i++){
//              if(maxi<arr[i]){
//                 maxi=arr[i];
//              }

//            }
//            int hash[maxi+1]={0};
//            for(int i=0;i<maxi+1;i++){
//              hash[arr[i]]++;


//            }
           
//          for(int i=0;i<maxi+1;i++){
//             if(hash[arr[i]]==1){
//                 cout<<arr[i];
//                 break;
//             }
//          }

// }
int main(){


  int arr[]={2,3,2,3,4,4,5,5};
  int n=8;
  int a=0;
  for(int i=0;i<n;i++){
    a^=arr[i];
  }
  cout<<a<<endl;








}







