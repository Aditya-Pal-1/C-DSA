#include<bits/stdc++.h>
using namespace std;
void reverArr(int i,int arr[], int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverArr(i+1,arr,n);
}

int main(){
    int n = 5;
    int arr[n]={1,2,3,4,5};
    reverArr(0,arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}