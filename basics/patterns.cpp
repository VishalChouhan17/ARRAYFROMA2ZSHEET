// #include <bits/stdc++.h>           
// using namespace std;
// int main(){
// using namespace std;
// int main(){
//    int p=6;
//  for(int i=1;i<=p;i++){
//     for(int j=1;j<=i-1;j++){
//         cout<<" ";
//     }

// for(int j=1; j<=2*p-2*i-1;j++){
//     cout<<"*";
 
//  }
// cout<<endl;
//     }
//     //  *********
//     //   *******
//     //    *****
//     //     ***
//     //      *

// }


 #include <bits/stdc++.h>
 using namespace std;
 int main(){

    int n=5;
    for(int i=1;i<=n;i++){
  int start=1;
if(i%2==0){
    start=0;
}
else{
    start=1;
}
for(int j=1;j<=i;j++){
    cout<<start;
    start=1-start;
    

}
 cout<<endl;



    }

 }