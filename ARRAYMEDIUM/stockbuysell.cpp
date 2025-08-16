#include <bits/stdc++.h>
 using namespace std;
 int main(){
// t.c 0(n)
int arr[]={1,3,2,0,6,8};
int n=6;
int mxp=0;//maximum profit
int bb=arr[0];//best price to buy
for(int i=1;i<n;i++){

int cost=arr[i]-bb;
mxp=max(mxp,cost);//max profit

bb=min(arr[i],bb);//keep minimum price to buy


}
cout<<mxp;


 }






 