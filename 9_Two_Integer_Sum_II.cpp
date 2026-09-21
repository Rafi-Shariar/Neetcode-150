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

vector<int>twoSum(vector<int>& numbers, int target){

    int i=0;
    int j=numbers.size() - 1;

    while (i < j)
    {
        int val1 = numbers[i];
        int val2 = numbers[j];
        int sum = val1 + val2;

        if(sum == target){
            return {i+1, j+1};
        }
        else if ( sum > target){
            j--;
        }
        else
        {
            i++;
        }
        
    };

    return {};
    
}

int main() {

    vector<int>numbers = {1,2,3,4};
    int sum = 3;
    
    vector<int>result = twoSum(numbers,sum);

    for (int i = 0; i < 2; i++)
    {
        cout << result[i] << " " ;
    }
    
    return 0;
}
