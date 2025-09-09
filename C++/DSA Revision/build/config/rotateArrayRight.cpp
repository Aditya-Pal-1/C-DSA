#include<bits/stdc++.h>
using namespace std;
int main(){
    int vec[7] ={1,2,3,4,5,6,7};
    int k= 3;

    int start =0;
    // int end=vec.size();
    // optimal solution
    int end=sizeof(vec) / sizeof(vec[0]);
    int n = end-k;
    // reverse(vec,vec+n);
    // reverse(vec+n,vec+end);
    // reverse(vec,vec+end);
    // for(auto it : vec){
    //     cout<<it<<" ";
    // }
    // bruteforce method
    vector<int>temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(vec[i]);
    }
    for(auto it : temp){
        cout<<it<<" ";
    }
    cout<<endl;
    for (int i = n; i < end; i++)
    {
        vec[i-n] = vec[i];
    }
    // for(auto it : vec){
    //     cout<<it<<" ";
    // }
    int j=0;
    for (int i = k; i <end; i++)
    {
        vec[i]=temp[j];
        j++;
    }
    for(auto it : vec){
        cout<<it<<" ";
    }
    
    
}