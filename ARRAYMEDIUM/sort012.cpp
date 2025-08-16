 
 #include <bits/stdc++.h>
 using namespace std;
 
 
 
 //0(2n) time complexity brute force solution
//  void sortColors(vector<int>& nums) {
//       int cnt1=0,cnt2=0,cnt0=0;  
//      for(int i=0;i<nums.size();i++){
//         if(nums[i]==0) 
//         cnt0++;
//         else if(nums[i]==1)
//         cnt1++;
//         else
//          cnt2++;
        

//      }
//      for(int i=0;i<cnt0;i++){
//         nums[i]=0;
//      }
//       for(int i=cnt0;i<cnt1+cnt0;i++){
//         nums[i]=1;
//      }
//       for(int i=cnt1+cnt0;i<nums.size();i++){
//         nums[i]=2;
//      }
//     }
//      int main(){
//        vector<int> vec={1,0,0,2,1,0};
//        int n=6;
//        sortColors(vec);

//        for(auto it:vec){
//         cout<<it<<" ";
//        }



//      }
// optimal solution by using dutch national flag algo
//we point mid variable at unsorted part 
//low |   mid | high|
//0 0  |1 1  |2 2 2  //in mid part it contains unsorted element 
//{1,2,2,1,0,0,0} we point low and mid on 1 since arr[mid]=1 we do mid++;
//low at arr[0] and mid at arr[1] ==2 we swap(arr[mid],arr[high]) and if we 
// find nums[mid]==0 we swapmid and low and increase low++ and mid++;
    void sortColors(vector<int>& nums) {
       
          int   mid=0;
          int  high=nums.size()-1;
            int low=0;

        while(mid<=high){
            if(nums[mid]==0){
               swap( nums[mid],nums[low]);
               mid++;
               low++;
            }
            else if(nums[mid]==1) mid++;
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            
            }





        }








    }