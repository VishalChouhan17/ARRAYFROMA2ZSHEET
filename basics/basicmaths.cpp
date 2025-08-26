#include <bits/stdc++.h>
using namespace std;
//1count no of digit
//     int countDigit(int n) {int cnt=0;
//         while(n>0){
//      int lstd=n%10;
//      cnt++;
//      n=n/10;
      



//         }
//         return cnt;
//     }
// int main(){


//    cout<<countDigit(373);
// };
//2palindrome or not 
// bool palindrome(int x){
// int og=x;
// int nd=0;
// while(x!=0){
//  int ld=x%10;
//  nd=nd*10+ld;
//  x/=10;

// }
// return og==nd;

// }
// int main(){

//   int x=119;
//   if(palindrome(x)==1){
//     cout<<"true"<<endl;
//   }
//   else cout<<"false";


// }
//3armstrong no
// bool armstrong(int n){
//  int og=n;
//  int an=0;
// while(n!=0){
//  int ld=n%10;
//  an+=ld*ld*ld;
 
//   n=n/10;

// }
// return og==an;


// }
// int main(){
// int x=113;
// cout<<armstrong(x);

// }

//4 all divisors of n

//     void print_divisors(int n) {
//         vector<int> vec;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             vec.push_back(i);
//         }
        
//     }
    
//     for(int val:vec){
//         cout<<val<<" ";
//     }
    
    
    
    
//     }
// int main(){
//     print_divisors(45);
// }
//5 gcd and lcm
// int gcd(int a,int b){
// if(b==0)return a;
// return gcd(b,a%b);

// }
// int lcm(int a,int b){
// return (gcd(a,b)/a*b);


// }
// int main(){

//     cout<<gcd(3,5)<<endl;
//     cout<<lcm(5,5);
// }

//6 fibonacci number 
//0 1 1 2 we have recursive function f(5)=f(5-1)+f(5-2);
int fbn(int n){
if(n<=1){
return n;
}


 return (fbn(n-1)+fbn(n-2));

}
int main(){

cout<<fbn(4);


}