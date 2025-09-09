#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec = {2,4,6,3,9};
    int largest = vec[0];
    int secLargest = -1;
    // optimal solution 
    // TC O(N);
    for (int i = 1; i < vec.size(); i++)
    {
        if(vec[i] > largest){
            secLargest = largest;
            largest = vec[i];
        }
        else if(vec[i] < largest && vec[i] > secLargest){
            secLargest= vec[i];
        }
    }
    cout<<secLargest;
}