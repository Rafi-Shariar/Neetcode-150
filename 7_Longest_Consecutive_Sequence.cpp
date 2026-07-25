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

int longestConsecutive(vector<int>& nums) {

    if(nums.size() == 0){
        return 0;
    }
    
    set<int>st;
    vector<int>v;

    for(auto i : nums){
        st.insert(i);
    }

    for(auto i : st){
        v.push_back(i);
    }

    int count = 1;
    int ans = 1;

    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] - v[i-1] == 1){
            count++;
        }
        else
        {
            ans = max(ans,count);
            count = 1;
        }

        // cout << count << "--" << ans << endl;

        
    }

    ans = max(ans,count);

    return ans;
    

}
int main() {

    vector<int>nums = {0,3,2,5,4,6,1,1};

   

    int ans = longestConsecutive(nums);
    cout << ans << endl;



    


    

    


    return 0;
}
