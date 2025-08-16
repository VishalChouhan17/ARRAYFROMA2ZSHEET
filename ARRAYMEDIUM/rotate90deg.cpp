#include <bits/stdc++.h>
using namespace std;
int m=3;
int n=3;

int main(){
   
vector<vector<int>> arr={
    {1,2,3},
    {4,5,6},
    {7,8,9},
};
//brute approach t.c 0(n^2) s.c 0(n2)
// int rotate[3][3]={{0},{0}};
// int y=2;
// for(int i=0;i<m;i++){
//     int x=0;
//     for(int j=0;j<n;j++){
//         rotate[x][y]=arr[i][j];
//         x++;
//     }
  
//     y--;
// }




// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
        
//         cout<<rotate[i][j]<<" ";
//     }
//     cout<<"\n";
// }

// }


//optimal s.c0(1);
//first we transpose matrix and by swaping rows and columns except diagonal elements
// then we reverse rows
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<m;j++){
      
            swap(arr[i][j],arr[j][i]);
        }
    
} 


for(int i=0;i<n;i++){
    reverse(arr[i].begin(),arr[i].end());
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}







}





