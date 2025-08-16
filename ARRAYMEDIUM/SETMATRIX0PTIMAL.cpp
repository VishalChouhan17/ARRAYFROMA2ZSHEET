#include <bits/stdc++.h>
using namespace std;
int m=3;
int n=3;

int main(){
    int row[3]={0};
    int col[3]={0};
int arr[3][3]={
    {1,2,1},
    {1,3,1},
    {0,0,1},
};
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==0){
          row[i]=1;
          col[j]=1;
        }
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(row[i]==1||col[j]==1){
            arr[i][j]=0;
        }
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}














}
