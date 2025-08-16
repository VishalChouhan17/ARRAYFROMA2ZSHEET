#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){


long long a,b,x,y;
cin>>a >>b >>x >>y;
long long  og=a;
long long  cntadd=0;
while(a!=b){
    a+=1;
   cntadd++;
}
long long  cntx=0;
while(a!=b){
    a^=1;
    cntx++;
}
if(a==b)cout<<min(cntadd,cntx)<<endl;
else cout<<-1<<endl;







 }
}