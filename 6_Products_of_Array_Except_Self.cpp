#include <iostream>
#include <iostream>  
#include <vector>       
#include <string>      
#include <map>          
#include <set>         
#include <unordered_map> 
#include <unordered_set> 
#include <stack>       
#include <queue>       
#include <deque>        
#include <algorithm>   
#include <cmath>       
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    
   vector<int>pref,suffTemp,suff,ans;

    int j= nums.size()-1;
    int sufV = 0;

   for (int i = 0; i < nums.size(); i++)
   {

    if( i == 0){
        pref.push_back(nums[i]);
    }
    else
    {
        pref.push_back(nums[i] * pref[i-1]);
    }

    if(j == nums.size() - 1){
        suffTemp.push_back(nums[j]);
        sufV = nums[j];
    }
    else
    {
        suffTemp.push_back(sufV * nums[j]);
        sufV = nums[j] * sufV;
    }
    
    j--;

 
   }

   for (int i = suffTemp.size() - 1; i >= 0; i--)
   {
     suff.push_back(suffTemp[i]);
   }
   
   for (int i = 0; i < nums.size(); i++)
   {
     if(i == 0){
        ans.push_back(suff[1]);
     }
     else if ( i == nums.size()-1){
        ans.push_back(pref[ nums.size()-2]);
     }
     else
     {
        ans.push_back(pref[i-1] * suff[i+1]);
     }
     
   }

    return ans;


}
int main() {

    vector<int>nums = {-1,0,1,2,3};

    // vector<int>ans = productExceptSelf(nums);

    // for(auto i : ans){
    //     cout << i << " ";
    // }

    productExceptSelf(nums);



    


    

    


    return 0;
}
