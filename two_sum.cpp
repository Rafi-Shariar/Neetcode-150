// https://neetcode.io/problems/two-integer-sum/history
#include<iostream>
using namespace std;
vector<int> fun(vector<int>nums, int target){

    unordered_map<int,int>freq;

    for (int i = 0; i < nums.size(); i++)
    {
        freq[ nums[i]]++;
    }

    int ind1 = 0;
    int val = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ind1 = i;
        int rest = target - nums[i];
        freq[nums[i]]--;
        if( freq[rest]>0){
            val = rest;
            break;
        }
        freq[nums[i]]++;
    }

    int ind2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(i != ind1){
            if(nums[i] == val){
                ind2 = i;
                break;
            }
        }
    }

    vector<int>ans;
    ans.push_back(ind1);
    ans.push_back(ind2);

    return ans;
    

}
int main(){
    vector<int>v = {5,5};
    int a = 10;

    vector<int>ans = fun(v,a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}