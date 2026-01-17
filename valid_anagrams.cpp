#include<iostream>
#include<map>
using namespace std;

bool fun(string s, string t){

    if( s.size() != t.size()) return false;
    vector<int>v(26);

    for (int i = 0; i < s.size(); i++)
    {
        int value = s[i] - 97;
        v[value]++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        int value = t[i] - 97;
        v[value]--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > 0) return false;
    }

    return true;
    
    

}

int main(){
    string s = "jar";
    string t = "jam";

    cout << fun(s,t);

    return 0;
}