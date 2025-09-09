#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>vec = {"eat","tea","ant","tan","ban"};
    map<map<char, int>,vector<string>> mp;
    for(auto str : vec){
        map<char, int>mp1;
        for( auto s : str){
            mp1[s]++;
        }
        mp[mp1].push_back(str);
    }
    vector<vector<string>> vec1;
    for( auto it = mp.begin(); it!= mp.end();it++){
        vec1.push_back(it->second);
    }
    for(auto entry : vec1){
        for(auto it : entry){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}