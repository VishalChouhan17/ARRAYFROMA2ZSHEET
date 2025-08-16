#include <bits/stdc++.h>
using namespace std;
// int main(){

// brute force (n^2)
// int arr[]={5,2,3,4,1};
// int n=5;
// int cnt=0;
// for(int i=0;i<n;i++){

//    for(int j=i+1;j<n;j++){
//       if(arr[i]>arr[j]){
//          cnt++;
//       }
//    }
// }

// cout<<cnt<<endl;


// }
//nlog(n) by merge sort
int cnt=0;
void merge(vector<int> &arr,int low,int mid,int high){
int left=low;
int right=mid+1;
  vector<int> temp;
  while(left<=mid &&right<=high){
   if(arr[left]<=arr[right]){
    temp.push_back(arr[left]);
    left++;
   }

   else{
    temp.push_back(arr[right]);
    cnt+=(mid-left+1);
    right++;
   }
}
   while(left<=mid){
    temp.push_back(arr[left++]);//if elements remained in left array
   }

   while(right<=high){
    temp.push_back(arr[right++]);//if elements remained in right array
   }
   for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];//copy element of temporary array in original array
   }

  }





void mergsort(vector<int> &arr,int low,int high){
     int mid=low+(high-low)/2;
     if(low>=high)return;
  
  mergsort(arr,low,mid);//for breakleft part till one element
  mergsort(arr,mid+1,high);//for break right part till one element
  merge(arr,low,mid,high);//merge two arrays 
  
   

}
int main(){
 vector <int> arr={4,5,2,3,1};
  int low=0;
  int high=arr.size()-1;
  mergsort(arr,low,high);
 cout<<cnt;
}





