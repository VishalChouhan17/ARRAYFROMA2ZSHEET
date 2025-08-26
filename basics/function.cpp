#include <bits/stdc++.h>
using namespace std;
//  void func(string s){/*a copy of string s is sended to function*/
//    s[0]='n';
//    cout<<s<<endl;




//  }
//  int main(){

//  string s="vishal";
// func(s);
// cout<<s;/*original value of s do not change by function*/


// }
void name(string &s){/*pass by reference means adress(exact value) is passed to function*/
  s[0]='n';
  s[2]='i';
  cout<<s<<endl;

}

int main(){

    string s="Vishal";
    name(s);/* the original value will changed*/
    cout<<s;
}