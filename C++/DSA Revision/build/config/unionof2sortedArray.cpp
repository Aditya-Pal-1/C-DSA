#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec1 = {1,2,3,4,5,6,7};
    vector<int>vec2 = {1,2,3,4,5,6,7,8,9};
    vector<int>unionarr;
    set<int>st;
    // Bruteforce approach
    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     st.insert(vec1[i]);
    // }
    // for (int i = 0; i < vec2.size(); i++)
    // {
    //     st.insert(vec2[i]);
    // }
    // for(auto it : st){
    //     unionarr.push_back(it);
    // }
    // for(auto it : unionarr){
    //     cout<<it<<" ";
    // }
    int n1= vec1.size();
    int n2 = vec2.size();
    int i =0;
    int j= 0;
    while (i<n1 && j<n2)
    {
        if(vec1[i]<=vec2[j]){
            if(unionarr.size() == 0 || unionarr.back()!=vec1[i]){
                unionarr.push_back(vec1[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()== 0 || unionarr.back() != vec2[j]){
                unionarr.push_back(vec2[j]);
            }
            j++;
        }
    }
    while (i<n1)
    {
            if(unionarr.size() == 0 || unionarr.back()!= vec1[i]){
                unionarr.push_back(vec1[i]);
            }
            i++;
    }
    while (j<n2)
    {
            if(unionarr.size() == 0 || unionarr.back()!= vec2[j]){
                unionarr.push_back(vec2[j]);
            }
            j++;
    }
    for(auto it : unionarr){
        cout<<it<<" ";
    }
    
}