#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr1={1,2,3,3,4,5};
    vector<int> arr2 ={2,2,3,4,5};
    vector<int> intersection;
    int n = arr1.size();
    int m = arr2.size();
    int visit[n]={0};
    int i =0;
    int j=0;
    // Bruteforce approch 
    // TC nxn
    // for (int  i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(arr1[i]==arr2[j] && visit[j]==0){
    //             intersection.push_back(arr1[i]);
    //             visit[j]=1;
    //             break;
    //         }
    //         if(arr2[j] > arr1[i]){
    //             break;
    //         }
    //     }
    // }
    // for(auto it : intersection){
    //     cout<<it<<" ";
    // }
    // Two pointer approach (optimal solution)
    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(auto it : intersection){
        cout<<it<<" ";
    }   
}