#include <bits/stdc++.h>
using namespace std;
int n=3;

int main(){

int arr[][3]={{1,2,3},
             {4,5,6},
             {7,8,9}
};
int left=0,right=2;
int bottom=2,top=0;
while(top<=bottom && left<=right){
for(int i=left;i<=right;i++){
    cout<<arr[top][i]<<" ";
   
}
 top++;
//here for loop check if top greater than bottom
for(int i=top;i<=bottom;i++){
    cout<<arr[i][right]<<" ";
  
}
  right--;
  // we have to check because here for loop check for right and left
if(top<=bottom){for(int i=right;i>=left;i--){
    cout<<arr[bottom][i]<<" ";
    
}
bottom--;
}
//here also we have to check since for loop check for bottom and top
if(left<=right){for(int i=bottom;i>=top;i--){
    cout<<arr[i][left]<<" ";
    
}
left++;
}




}


}









