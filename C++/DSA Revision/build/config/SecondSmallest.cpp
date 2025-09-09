#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec = {2,4,6,3,9};
    int smallest = vec[0];
    int secSmallest = INT_MAX;
    for (int i = 1; i < vec.size(); i++)
    {
        if(vec[i] < smallest){
            secSmallest = smallest;
            smallest = vec[i];
        }
        else if(vec[i]!= smallest && vec[i]<secSmallest){
            secSmallest=vec[i];
        }
    }
    cout<<secSmallest;
}