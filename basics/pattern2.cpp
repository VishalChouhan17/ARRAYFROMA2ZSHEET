2 2 1 1 2
1 1  1 2 2 2 2 2

 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    // int n=4;
    // for(int row=1;row<=n;row++){

    //  for(int j=1;j<=row;j++){
    //     cout<<j;
    //  }
    //  for(int space=1;space<=8-2*row;space++){
    //     cout<<" ";
    //  }
    
    //  for(int j=row;j>=1;j--){
    //     cout<<j;
    //  }
    // cout<<endl;


    // }

//  int n=4;
//  int p=1;
//      for(int row=1;row<=n;row++){

//         for(int j=1;j<=row;j++){
//             cout<<p;
//             p+=1;
//         }
//         cout<<endl;



//     }

//  }
// int n=7;

// for(int i=1;i<=n;i++){
//     char  ch='A';
//   for(int j=n-i-1;j>=1;j--){
//     cout<<ch;
//     ch+=1;
   

//   }
//   cout<<endl;

// }

int n=4;

for(int i=1;i<=n;i++){
    
 for(int space=1;space<=n-i;space++){
    cout<<" ";
 }
 
char ch='A';
 int breakpoint=(2*i+1)/2;
for(int j=1;j<=2*i-1;j++){
     cout<<ch;
      if(j<breakpoint){
         
          ch++;
          
      }
      
      else{ ch--;
           
            }
     
      
      

}
cout<<endl;
}





}










 