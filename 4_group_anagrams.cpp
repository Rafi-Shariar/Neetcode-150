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

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    unordered_map<string, vector<string>>groups;

    for(int i=0; i< strs.size(); i++){
        string cur_string = strs[i];
        string sorted_s = strs[i];
        sort(sorted_s.begin(), sorted_s.end());

        groups[sorted_s].push_back(cur_string);

    }

     vector<vector<string>>ans;
        for(auto entry : groups){
            ans.push_back(entry.second);
        }

    return ans;


   

}
int main() {

    vector <string> strs = {"act","pots","tops","cat","stop","hat"};

    vector<vector<string>> result = groupAnagrams(strs);

    


    return 0;
}
