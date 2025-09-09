#include<bits/stdc++.h>
using namespace std;
int mp(int arr[], int n){
    map<int, int>mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}
int main(){
    int arr[5]={1,2,3,2,1};
    mp(arr,5);
}