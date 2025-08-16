#include <bits/stdc++.h>
using namespace std;
int main(){

// int arr[]={5,0,4,0,6,0,1};
// int n=7;
// int temp[n];
// int cnt=0;
// int j=0;//we using j as index of temp so that it cant leave any empty index .
// for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         temp[j]=arr[i];
//         cnt++;
//         j++;
//     }
// }
// for(int i=0;i<cnt;i++){
//     arr[i]=temp[i];
// }
// for(int i=cnt;i<n;i++){
// arr[i]=0;
// }
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// int arr[]={3,0,6,0,0,3,4,1};
// int n=8;
// vector<int> temp;
// for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         temp.push_back(arr[i]);
//     }
// }
// for(int i=0;i<temp.size();i++){
//     arr[i]=temp[i];
// }



// for(int i=temp.size();i<n;i++){
//     arr[i]=0;
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }


//optimal solution by two pointers 
int arr[]{2,42,1,1,4,98,1};
int n=7;
 int j=-1;
for(int i=0;i<n;i++){
   //first we find first index where element is 0;
  if(arr[i]==0){
    j=i;
    break;
  }

}
//if we find element 0 then we check for non zeroand swap both;
//we use j!=-1 so that if arr have no zero than arr[-1] dont give error
if(j!=-1)for(int i=j+1;i<n;i++){
if(arr[i]!=0){
    swap(arr[i],arr[j]);
    j++;
}
}


for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


}