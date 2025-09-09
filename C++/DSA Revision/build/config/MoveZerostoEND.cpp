#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,0,0,3};
    vector<int> temp ;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if(arr[i]!=0){
    //         temp.push_back(arr[i]);
    //     }
    // }
    // for(auto it : temp){
    //     cout<<it<<" ";
    // }
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     arr[i]=temp[i];
    // }
    // int nz = temp.size();
    // for (int i = nz; i <= arr.size(); i++)
    // {
    //     arr[i] = 0;
    // }
    // for(auto it : arr){
    //     cout<<it<<" ";
    // }
    // optimal solution
    int j= -1;
    for (int  i = 0; i < arr.size(); i++)
    {
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    // if(j==-1){
    //     return ;
    // }
    for (int i = j+1; i < arr.size(); i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(auto it : arr){
        cout<<it<<" ";
    }

    
}