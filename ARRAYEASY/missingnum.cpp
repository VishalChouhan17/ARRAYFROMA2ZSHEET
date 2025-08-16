#include <bits/stdc++.h>
using namespace std;

int missing(int arr[],int n){

   sort(arr,arr+n);
for(int i=0;i<n;i++){
if(arr[i]!=i){
    return i;
    
}

}


return n;


}
int main(){
int arr[]={3,4,1,5,0,2};
int n=6;
cout<<missing(arr,n);

















}

















