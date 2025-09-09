#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec ={1,2,3,4,5,6,7,8};
    vector<int> temp ;
    int k = 3;
    int n = vec.size();
    cout<<n<<endl;
    // Bruteforce approach;
    for(int i = 0;i < k ;i++){
        temp.push_back(vec[i]);
    }
    for(int i = k; i< n; i++){
        vec[i-k] = vec[i];
    }
    int j=0;
    for(int i =n-k; i<n;i++){
        // vec[i]=temp[j];
        vec[i]=temp[i-(n-k)];
        j++;
    }
    for(auto it : vec){
        cout<<it<<" ";
    }
}