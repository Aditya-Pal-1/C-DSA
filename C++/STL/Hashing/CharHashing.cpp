#include<bits/stdc++.h>
using namespace std;
int charFrequeny(string s, char ch){
    // int hashArr[26]= {0};
    int hashArr[256]= {0};
    
    for (int i = 0; i < s.size(); i++)
    {
        // hashArr[s[i]-'a']+=1;
        hashArr[s[i]]+=1;
    }
    // return hashArr[ch - 'a'];
    return hashArr[ch];
}
int main(){
    string s ="adAdttya";
    cout<<charFrequeny(s,'d');
}