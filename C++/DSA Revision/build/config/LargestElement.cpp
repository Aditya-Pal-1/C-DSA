#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,3,42,2,6,4};
    vector<int> vec={1,3,42,2,6,4};
    // brute force method
    // TC O(N log N)
    sort(arr,arr+6);
   cout<<arr[5] << endl;
   sort(vec.begin(),vec.end());
   cout<<vec[vec.size()-1]<< endl; 
    // Optimal Solution
    int largest = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;
}