#include<iostream>
#include<map>
using namespace std;
int main(){

    vector<int>v = {1,2,3,44};
    map<int,int>mp;
    int flag = false;

    for (int i = 0; i < v.size(); i++)
    {
        int value = v[i];
        mp[value]++;

        if(mp[value] > 1){
            flag = true;
            break;
        }
        

    }

    cout << flag << endl;
    

    return 0;
}