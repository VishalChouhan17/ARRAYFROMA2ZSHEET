#include <bits/stdc++.h>
using namespace std;
// int main(){
// vector<int> vec={2,4,62,4};
// sort(vec.begin(),vec.end());
// for(auto it:vec){//if we dont know data type of value we use auto
//     cout<<it;
// }
// cout<<endl;
// //sort ascending 
// sort(vec.begin()+2,vec.end());
// cout<<vec[3]<<endl;;
// //sort descending
// sort(vec.begin(),vec.end(),greater<int>());
// for(int it:vec ){
//     cout<<it<<" ";
// }



// }
//sorting in new way
// bool compare(pair<int,int>p1,pair<int,int>p2){
// if(p1.second!=p2.second){ return p1.second<p2.second;}
// return p1.first>p2.first;



// }
// int main(){
// vector<pair <int,int>> vec={{1,2},{2,2},{3,1},{3,5}};
// //first we sort in ascending order using second element {3,1}on first
// //we sort in descending order using first element {3,1},{2,2},{1,2}
// sort(vec.begin(),vec.end(),compare);
// for(auto it:vec){
//     cout<<it.first<<" "<<it.second<<endl;
// }

// }

// 
int main(){
// int num=12;
// int cnt=__builtin_popcount(num);//counts o of 1s in binary form of num
// cout<<cnt<<endl;
// long long num1=12;
// int cnt1=__builtin_popcountll(num1);//for long long data type
// cout<<cnt1;
// string s="213";
// sort(s.begin(),s.end());
// do{
// cout<<s<<endl;
// }
// while(next_permutation(s.begin(),s.end()));//for all permutation its important that s should be in sorted order

vector<int> vec={1,4,6,77};
int maxe=*max_element(vec.begin(),vec.end());
cout<<maxe;



}