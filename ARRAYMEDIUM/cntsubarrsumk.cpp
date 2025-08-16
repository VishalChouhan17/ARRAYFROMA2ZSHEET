 #include <bits/stdc++.h>
 using namespace std;
 int main(){
 
 
 //optimal solution t.c= 0(n) in which we stores sum in hashmap with its frequency
 int ans=0;//return max occurence of sum
 int sum=0;
      
        unordered_map<int,int> mp;//stores <sum-k,frequency>
          mp[0]=1;//if starting index 0 has some =k then we would not able to count it so we add its frequency1

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum-k;
            if(mp.count(rem)){//find if some occured before
                ans+=mp[rem];//we add its count in ans
                
               
            }
            mp[sum]++;//stores sum with its frequency
            
          
            
        }




    }