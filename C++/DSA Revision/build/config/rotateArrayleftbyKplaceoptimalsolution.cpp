#include<bits/stdc++.h>
using namespace std;
void leftrotate(int vec[],int start, int end){
    while (start<end)
    {
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end]= temp;
        start++;
        end--;
    }
}

int main(){
    // vector<int> vec ={1,2,3,4,5,6,7,8};
    int vec[8] ={1,2,3,4,5,6,7,8};
    int k= 3;

    int start =0;
    // int end=vec.size();
    int end=sizeof(vec) / sizeof(vec[0]);
    // k%=end;
    // leftrotate(vec,start,k-1);
    // leftrotate(vec,start+k,end-1);
    // leftrotate(vec,start, end-1);
    // for(auto it : vec){
    //     cout<<it<<" ";
    // }
    cout<<endl;
    reverse(vec,vec+k);
    reverse(vec+k,vec+end);
    reverse(vec,vec+end);
    for(auto it : vec){
        cout<<it<<" ";
    }
}