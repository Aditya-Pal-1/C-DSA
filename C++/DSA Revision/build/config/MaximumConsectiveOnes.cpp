#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec = {1,1,1,0,1,1,0,1,1,1,1,1,0,1};
    int maxi = 0;
    int count = 0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    cout<<maxi;
}