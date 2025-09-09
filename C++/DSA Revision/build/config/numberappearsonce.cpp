#include<bits/stdc++.h>
using namespace std;
int main(){
    // Brute force
    // TC => (NxN)
    // SC => O(N);
    vector<int> vec={1,1,2,3,3,4,4,2,5};
    int cnt=0;
    int nums;
    for (int i = 0; i < vec.size(); i++)
    {
        nums=vec[i];
        cnt =0;
        for(int j=0;j<vec.size();j++){
            if(nums==vec[j]){
                cnt++;
            }
        }
        if(cnt==1){
            cout<<nums << endl;
            break;
        }
    }
    // better approach 
    // Hashing
    // O(n)+O(max)+O(max)
    // SC O(max)
    int maxi=0;
    for(int i =0; i<vec.size();i++){
        maxi=max(maxi,vec[i]);
    }
    int hash[maxi+1]={0};
    for(int i =0; i<vec.size();i++){
        hash[vec[i]]++;
    }
    int size = sizeof(hash) / sizeof(hash[0]);
    for(int i =0; i<size;i++){
        if(hash[i]== 1){
            cout<<i<<endl;
            break;
        }
    }
    // Map
    map<int , int>mp;
    for(int i=0; i<vec.size();i++){
        mp[vec[i]]++;
    }
    for(auto it : mp){
        if(it.second ==1){
            cout<<it.first<<endl;
            break;
        }
    }
    // XOR Operation
    int xor1 = 0;
    for(int i=0;i<vec.size();i++){
        xor1 = xor1^vec[i];
    }
    cout<<xor1;
}