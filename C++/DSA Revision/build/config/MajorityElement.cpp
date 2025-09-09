#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr ={1,3,2,3,3,3,3,3,5,5,3,1,2,3};
    int n = arr.size()/2;
    int count = 0;
    map<int, int> mp;
    for(int i = 0; i<arr.size();i++){
        mp[arr[i]]++;
    }
    for( auto it : mp){
        if(it.second > n){
            cout<<it.first<<endl;
        }
    }
    // optimal solution
    // BayerMoore voting an algorith
    // step to solve using this 
    // initialize the element if the elemnt is same increase the count otherwise decrease the count
    int element ;
    int count1 = 0;
    for(int i =0; i<arr.size();i++){
        if(count1 == 0){
            element = arr[i];
            count1 = 1;
        }
        else if(element == arr[i]){
            count1++;
        }
        else{
            count1--;
        }
    }
    cout<<element;
}