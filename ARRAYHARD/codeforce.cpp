#include <bits/stdc++.h>
using namespace std;





// int main(){

//   int t;
//   cin>>t;
//   while(t--){
//       int n;
//       cin>>n;
//       vector<int> arr(n);
     
//      map<int,int> mp; 
//       for(int i=0;i<n;i++){
//         cin>>arr[i];
//       mp[arr[i]]++;
//       }
      
//         if(mp.size()>2){
//          cout<<"NO"<<endl;
//         }
      

//       else { int f1=mp.begin()->second;
//                 int f2=mp.rbegin()->second;
//           if(f1==f2)cout<<"YES"<<endl;
//           else if(n%2==1 && abs(f1-f2)==1)cout<<"YES"<<endl;
//           else cout<<"NO"<<endl;





//       }



//   }


// }
int main(){
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   string s;
   cin>>s;
   string p="...";
   if(s.find(p)!=string::npos){
    cout<<2<<endl;
   continue;
   }
   int cnt=0;
   for(int i=0;i<n;i++){
    if(s[i]=='.')cnt++;
   }
   cout<<cnt<<endl;












   }


}






