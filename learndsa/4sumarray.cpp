#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={3,2,1,2,3,6,1};

int n=7;
int tg=10;
//0(n^4)
// set<vector<int>> vec;
// for(int i=0;i<n;i++){

//     for(int j=i+1;j<n;j++){

//          for(int k=j+1;k<n;k++){
            
//             for(int l=k+1;l<n;l++){
//                 vector<int> temp;
//                 if(arr[i]+arr[j]+arr[k]+arr[l]==tg){
//                     temp.push_back(arr[i]);
//                       temp.push_back(arr[j]);
//                         temp.push_back(arr[k]);
//                           temp.push_back(arr[l]);
//                           sort(temp.begin(),temp.end());
//                           vec.insert(temp);

//                 }
//             }
           
//          }
//     }
// }

// for(auto it:vec){
//     for(auto num:it){
//         cout<<num<<" ";
//     }
// }



// }
//better by using hashset
//n^3*log(m)
//[s.c=0(n) for hashet]+[(4)*2for returned set and stored vector]
// set<vector<int>> vec;

// for(int i=0;i<n;i++){

//     for(int j=i+1;j<n;j++){
//         set<int> hash;
//         for(int k=j+1;k<n;k++){

//             int fourth=tg-(arr[i]+arr[j]+arr[k]);
//             if(hash.find(fourth)!=hash.end()){
//                 vector<int> temp={arr[i],arr[j],arr[k],fourth};
//                 sort(temp.begin(),temp.end());
//                 vec.insert(temp);
//             }
//           hash.insert(arr[k]);//log(m)
//         }
//     }
// }


//  for(auto it:vec){
//      for(auto num:it){
//          cout<<num<<" ";
//      }
//  }






// }
//optimal by using three pointers
//time comp(n^3)
vector<vector<int>> vec;
sort(arr,arr+n);
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){

        int k=j+1;
        int l=n-1;
        if(i>0 && arr[i]==arr[i-1])continue;
        if(j>i+1 && arr[j]==arr[j-1])continue;
        while(k<l){

           long long sum=1ll*arr[i]+arr[j]+arr[k]+arr[l];
           if(sum>tg){l--;

           }
           else if(sum<tg){
            k++;
           }
           else{
            vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
             vec.push_back(temp);
             k++;
             l--;
             while(k<l &&arr[k]==arr[k-1] )k++;
             while(k<l &&arr[l]==arr[l+1] )l--;

          



           }
         





        }
    }
}
   


for(auto it:vec){
     for(auto num:it){
         cout<<num<<" ";
    }
    cout<<endl;
 }
}
