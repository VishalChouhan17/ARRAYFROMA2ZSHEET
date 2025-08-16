#include <bits/stdc++.h>
using namespace std;
int ncr(int n,int r){

    long long fact=1;//for case of large values we use long long
    for(int i=0;i<r;i++){
        fact*=n-i;
        fact/=i+1;
    }
   return fact;
}
     
    

int main(){
   
   //time comp 0(n^3)
  
// int n=5;
// list<list<int>> vec;

// for(int i=1;i<=n;i++){
//   list<int> temp;
//   for(int j=1;j<=i;j++){
//     temp.push_back(ncr(i-1,j-1));
//   }
//   vec.push_back(temp);

// }
// for(auto &row:vec){
//     for(auto &num:row){
//         cout<<num<<" ";
//     }
//     cout<<endl;
// }






// }
//tim comp 0(n^2);
int n=5;

for(int i=0;i<n;i++){
    int pro=1;//first val in each row always 1
    cout<<pro<<" ";//print 1
    for(int j=1;j<=i;j++){//print value from c(i,1) to c(i,i); 
        pro*=i-j+1;
        pro/=j;
        cout<<pro<<" ";
    }
    cout<<endl;
}

}