#include <bits/stdc++.h>
using namespace std;
int main(){
//missing and repeating t.c 0(2*n) & s.c=0(n);
int arr[]={1,3,3,5,2,6};
int n=6;
// int hash[n+1]={0};//size n+1 beacuse we have to count n+1
// for(int i=0;i<n;i++){
//     hash[arr[i]]++;
// }
// int missing=-1,repeating=-1;
// for(int i=1;i<n+1;i++){
//     if(hash[i]==0) missing=i;
//     else if(hash[i]==2) repeating=i;
//     if(missing!=-1 && repeating!=-1 ){
//         break;
//     }
    
// }
// cout<<missing<<" "<<repeating<<endl;
// }
//optimal space-0(1)
long long exsum=n*(n+1)/2;

long long exsum2=n*(n+1)*(2*n+1)/6;

int sum=0,sum2=0;
for(int i=0;i<n;i++){
   sum+=arr[i];
   sum2+=arr[i]*arr[i];

}
long long sumdiff=sum-exsum;
long long sum2diff=sum2-exsum2;
long long sumxy=sum2diff/sumdiff;
int x=(sumdiff+sumxy)/2;//repeating
int y=x-(sumdiff);//missing
cout<<x<<" "<<y<<endl;




}




