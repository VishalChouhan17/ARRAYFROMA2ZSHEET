
 #include <bits/stdc++.h>
 using namespace std;
 //brute approach
 int main(){
// int arr[]={2,2,2,3,2,3};
// int n=6;
// for(int i=0;i<n;i++){
//   int cnt=0;
//  for(int j=0;j<n;j++){
//   if( arr[i]==arr[j]){
//         cnt++;
//       }
    
   
//     }
//       if(cnt>n/2){
//         cout<<arr[i];
//       }



//     }
   

// }
//better solution by using hashmaps
//t.c=0(n) and spaceC.=0(n)
// int arr[]={2,2,2,3,2,3};
// int n=6;
// unordered_map<int,int> mp;
// for(int i=0;i<n;i++){
//     mp[arr[i]]++;//we increase cnt  at index arr[i] in map
// }

 
//  for(auto it:mp){
//     if(it.second>n/2){
//         cout<<it.first;
//     }
 

//  }


//  }
//optimal solution by moores voting alogorithm
//t.c=0(n) s.c=0(1)
int arr[]={2,1,2,3,2,3,2,2};
int n=8;
int cnt=0;
int ele;
for(int i=0;i<n;i++){
if(cnt==0){
    ele=arr[i];//first time we initialise with firt elemenet
    cnt++;

}



if(arr[i]==ele){
    cnt++;//then we increase cnt
}
else if(arr[i]!=ele){
    cnt--;//we decrease cnt if other element comes
}


}
for(int i=0;i<n;i++){

    if(arr[i]==ele){
        cnt++;
    }
    if(cnt>n/2){
        cout<<arr[i];
    }
}











}





 