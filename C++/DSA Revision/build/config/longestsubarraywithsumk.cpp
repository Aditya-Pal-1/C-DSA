#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr ={1,2,3,3,1,1,0,1,1};
    int sumk=7;
    int len=0;
    // int len=INT_MAX;
    int n=arr.size();
    for(int i=0; i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            // for(int k =i;k<=j;k++){
            //     sum=sum+arr[k];
            // }
            if(sum==sumk){
                len=max(len,j-i+1);
                // len=min(len,j-i+1);
            }
        }
    }
    cout<<len;


    // optimal solution 2 pointer approach
    int sum =0;
    int left =0;
    int right =0;
    while (right < n)
    {
        while ( left<=right && sum > sumk)
        {
            sum =sum-arr[left];
            left++;
        }
        if(sum==sumk){
            len=max(len,right-left+1);
        }
        right++;
        sum=sum+arr[right];
    }
    cout<<len;
    
}