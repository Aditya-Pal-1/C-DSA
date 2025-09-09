#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec = {1,2,2,3,4,5};
    for (int i = 1; i < vec.size(); i++)
    {
        if(vec[i]>= vec[i-1]){

        }
        else{
            cout<<"False";
            return false;
        }
    }
    cout<< "true";
    return true;
}