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

bool checkAlphaNumeric(char s){

    if(s >= 'a' && s <= 'z'){
        return true;
    }
    else if (s >= 'A' && s <= 'Z')
    {
        return true;
    }
    else if (s >= '0' && s <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool isPalindrome(string s){

    string sCleaned = "";

    for (int i = 0; i <  s.size(); i++)
    {
        bool isValid = checkAlphaNumeric(s[i]);

        if(isValid){

            char x = tolower(s[i]);
            sCleaned.push_back(x);
        }
        
    }

    // cout << sCleaned << endl;

    if(sCleaned.size() <= 1){
        return true;
    }

    int i=0;
    int j=sCleaned.size()-1;

    while (i<j)
    {
        if(sCleaned[i] != sCleaned[j]){
            return false;
        }

        i++;
        j--;
    }
    
    return true;

}
int main() {

    string s = "";

    bool result = isPalindrome(s);

    if(result){
        cout << "True" << endl;

    }
    else
    {
        cout << "False" << endl;
    }
    


    return 0;
}
