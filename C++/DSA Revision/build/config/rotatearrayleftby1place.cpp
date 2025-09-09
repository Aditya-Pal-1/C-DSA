#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    int temp = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        vec[i-1]=vec[i];
    }
    vec[vec.size()-1]=temp;
    for(auto it : vec){
        cout<<it<<" ";
    }
    
}