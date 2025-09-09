#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int> vec = {1,2,4,5};
    int num =5;
    // for (int i = 1; i < num; i++)
    // {
    //     int flag =0;
    //     for (int j = 0; j < vec.size(); j++)
    //     {
    //         if (vec[j]==i) 
    //         {
    //             flag =1;
    //             break;
    //         }
    //     }
    //     if (flag==0)
    //     {
    //         cout<<i;
    //         return i;
    //     }
    // }
    // int hash[vec.size()+1]={0};
    // for(int i =0;i<vec.size();i++){
    //     hash[vec[i]]++;
    // }
    // for (int i = 1; i < 6; i++)
    // {
    //     if(hash[i]==0){
    //         cout<<i;
    //     }
    // }
    // int sum = 0;
    // for(int i =0; i<vec.size();i++){
    //     sum=sum+vec[i];
    // }
    // int totalSum = num*(num+1)/2;
    // int diff = totalSum - sum;
    // cout<<diff;

    // XOR operation
    int xor1= 0;
    // for(int i = 0; i<vec.size();i++){
    //     xor1 = xor1^vec[i];
    // }
    int xor2=0;
    // for(int i = 1; i<num+1;i++){
    //     xor2 = xor2^i;
    // }
    // cout<<(xor1^xor2);
    for(int i=0;i<vec.size();i++){
        xor1= xor1^vec[i];
        xor2 = xor2 ^ (i+1);
    }
    cout<< (xor1 ^ xor2);
}
