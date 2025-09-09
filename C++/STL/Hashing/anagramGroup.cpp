#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> vec = {"eat","tea","ant","tan","ban"};
    unordered_map<string, vector<string>> mp;
    for(auto str : vec){
        string originalstr = str;
        sort(str.begin(), str.end());
        mp[str].push_back(originalstr);
    }
    vector<vector<string>> anagram;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        anagram.push_back(it->second);
    }
    for(auto it : anagram){
        for(auto it1 : it){
            cout<<it1<<" ";
        }
        cout<<endl;
    }
}