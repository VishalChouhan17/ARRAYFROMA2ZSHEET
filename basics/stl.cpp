

 #include <bits/stdc++.h>
 using namespace std;
//pairs
// void pairs(){

// pair<int,int> a={1,2};
// cout<<a.first<<a.second<<endl;
// pair<int,pair<int,int>> b={3,{4,6}};
// cout<<b.first<<b.second.first<<endl;

// pair<int,int>arr[]={{1,2},{3,4},{6,7}};
// cout<<arr[2].second;

// }


//  int main(){
// pairs();
//  }

void vectors(){
vector <int> v;
v.push_back(1);
v.emplace_back(2);//faster than pushback
cout<<v[0]<<endl;

vector<pair <int,int>> vec;
vec.push_back({1,2});
vec.emplace_back(1,2);
vector <int> v1(5,100);//a vector of size 5 with elements 100 5 times but it can store more value when pushed(dynamic)
vector <int> vc(v1);//a copy of v1 stored in vc

vector <int> v2(5);//size 5 and more elements are also added 
//iterators 
vector <int>a;
a.push_back(1);
a.push_back(2);
a.push_back(3);

  /*vector<int>::iterator*/auto it=a.begin();//points to memory address of firstelement 
it++;//we iterate to element at index 2
cout<<*(it);//value of element
cout<<endl;
//for print entire vector
 for(/*vector<int>::iterator*/auto it=a.begin();it!=a.end();it++)//a.end() points to adress justafter last element//
{/*in c++ any data type can assigned as auto*/
   cout<<*(it);
   cout<<endl; 
}
//another way for each loop
for(auto it:a){
    cout<<it;
}
a.push_back(4);
//a={1,2,3,4}
//erase function
//to delete elements 2,3 we start from 2 and to just after 3//
a.erase(a.begin()+1,a.begin()+3);
for(auto it:a){
    cout<<it;}
    
    //insert function
    vector<int> q;//let{100,2,3}
    q.insert(q.begin,5);//{5,100,2,3}
    q.insert(q.begin()+1,2,7);//{5,7,7,2,3}two times 7 after first element
     cout<<q.size();//size of vector
     q.pop_back();//last element deleted
     //v1={2,3}
     //v2={4,5}
     //v1.swap(v2);swap their elements
     //v.clear();erase all elements
      //cout<<a.empty();tell that vector empty or not
      //list
      void explainlist(){
       list<int> ls;
       ls.push_back(1);
       ls.emplace_back(2);
       ls.push_front(5);//{5,1,2}
       ls.emplace_front(7);//{7,5,1,2}
       //rest function same as vector
      }
      void dequeexplain(){
        deque <int> dq;
        //all function same as vector
         
      }
     void explainstack(){//last in first out(last wala first par hoga)
      stack<int> s;
      
      s.push(1);
      s.push(2);//{2,1}
      s.pop();//{1}
     // print first element
     cout<<s.top();//we cant use s[0] in stack
     }
     void explainqueue(){//first i first out (pahle wala pahle ayega)
      queue <int> qu;
       qu.push(1);//
       qu.push(2);//{1,2}
       cout<<q.back();//print last element
       cout<<q.pop();//delete first element 
       

     }
     void explainpq(){//the max value either int or char comes on top
      priority_queue<int> pq;
      pq.push(2);
      pq.push(5);//{5,2}
      pq.push(3);//{5,3,2}
      cout<<pq.top();//prints 5
      pq.pop();//delete 5

//minimum element at top
priority_queue<int,vector<int>,greater<int>> pq;
pq.push(5);
pq.push(2);//{2,5}
pq.push(1);//{1,2,5}
cout<<top();

     }

void explainset(){
//set stores in sorted order and unique elements
 //in sets everything happening in logarithmic complexity 
   set<int> st;
 st.insert(3);
 st.insert(1);//{1,3}
 st.insert(1);//{1,3}
 auto it=st.find(3);//points to memory address of 3
st.erase(it);//erase 3
int cnt=st.count(1);//counts no of 1s 
st.find(6);//if elment not present than it pointsmemory address just after last element 
//let st={1,2,3,4}
auto  it1=st.find(2);
auto it2=st.find(4);
st.erase(it1,it2);//erase2 and 3,delete-[2,4)
}

void explainmultiset(){
//stores in sorted order and element but element  occur multiple time
multiset <int> st;
st.insert(1);
st.insert(1);//{1,1}
st.erase(1);//all ones are erased in 1 time
st.erase(st.find(1));//erase 1 single time
}
//unordered set
void explainuset(){
unordered set<int> ust;
//stores element in unordered way
//lowerbound,upperbound doesnt work
//in worst case timecomlexity goes till 0(n) 


}
void explainmap(){
  //stores unique keys in sorted order of key time complexity 0(log(n))
map <int,int>mp;//declare single integer key with single integer value
mp[2]=2;//asigning key 2 to value 2
mp.insert({1,1});//key-2,val=4 {{1,1},{2,2}};
//accessing keys and elements
for(auto it:mp){
  cout<<it.first()<<" "<<it.second();
}


map <int,pair<int,int>> mp;//single integer key with double integer value

map <pair<int,int>,int> mp;//double inetger key with single integer value

mp[{1,2}]=5;
//let we have{3,1}
auto it=mp.find(3);
cout<<*(it).second;//one will get printed
//all functions work
}

void explainmultimap(){
multimap <int> mt;
//everything same as map only it can store multiple value
//only map[key] cant be used here
}
//unorderedmap-unique keys but not sorted and have time complexity 0(1);

void explainunorderedmap(){
  unordered_map<int,int>mpp;
  if(mpp.find(something)!=mpp.end)//if something is present



}













}

int main(){


    vectors();

}





