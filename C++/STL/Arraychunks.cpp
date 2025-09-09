#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    vector<vector<int>> vec;
    for (int i = 0; i < arr.size(); i+=2)
    {
        vector<int> chunk;
        for (int j = i; j < min(i + 2, (int)arr.size()); j++)
        {
            chunk.push_back(arr[j]);
        }
        vec.push_back(chunk);
    }
    for (const auto& row : vec) {
        cout<<"[";
        for (int num : row) {
            cout << num << " ";
        }
        cout <<"]" <<endl; 
    }
}