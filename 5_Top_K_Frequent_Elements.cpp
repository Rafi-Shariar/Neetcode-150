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


vector<int> topKFrequent(vector<int>&nums, int k){

    unordered_map<int,int>freq;

    for(int i : nums){
        freq[i]++;
    }

    priority_queue< pair<int,int> >pq;

   for(auto i : freq){
    pq.push(make_pair(i.second, i.first));
   }

   vector<int>ans;

   for (int i = 0; i < k; i++)
   {
      if(!pq.empty()){
        int value = pq.top().second;
        ans.push_back(value);
        pq.pop();
      }

   }

   return ans;
   
}

int main() {

    vector<int> nums = {1,2,2,3,3,3,4,4,4,8,8};
    int k = 2;

    vector<int>result = topKFrequent(nums,k);


    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    

    return 0;
}
