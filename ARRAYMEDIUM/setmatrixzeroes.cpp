#include <bits/stdc++.h>
using namespace std;
   
   
  

void markrow(int i,int arr[3][3]){
  int  m=3;
  
    for(int j=0;j<m;j++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
void markkcol(int j,int arr[3][3] ){
   int  n=3;
    for(int i=0;i<n;i++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}




int main(){
 
  int n=3;
  int m=3;
    int arr[][3]={{1,2,3},{1,0,4},{9,0,4}};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                markrow(i,arr);
                markkcol(j,arr);
            }
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
        }

}

}


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}


}