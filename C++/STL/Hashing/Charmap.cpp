#include<bits/stdc++.h>
using namespace std;
int charmp(string s,char ch){
    map<char, int>mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    for(auto it : mpp){
        cout<<it.first<< "->"<< it.second<<endl;
    }
    
    return 0;
}

int main(){
    string s= "aaaasssssssssssdddddddddssasajsjkjjbk";
    charmp(s,'a');
}