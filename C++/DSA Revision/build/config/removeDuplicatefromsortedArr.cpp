#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec = {1,2,2,3,3};
    set<int> st;// set stores the unique values in acending order
    int index = 0;
    // TC NlogN+O(N);
    // SC O(n);
    for (int i = 0; i < vec.size(); i++)
    {
        st.insert(vec[i]);
    }
    for(auto it : st){
        vec[index] = it;
        index++;
    }
    vec.resize(index);
    for(auto it : vec){
        cout<<it<<" ";
    }  
    vector<int>vec1 = {1,2,2,3,3,4};
    // 2 pointer approch 
    // TC O(n) nad SC O(1);
    int i =0;
    for (int j = 1; j <vec1.size() ; j++)
    {
        if(vec1[j]!= vec1[i]){
            vec1[i+1]= vec1[j];
            i++;
        }
    }
    vec1.resize(i);
    for(auto it : vec1){
        cout<<it<<" ";
    } 
    cout<<endl;
    cout<<i;
}