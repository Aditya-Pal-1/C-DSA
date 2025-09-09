#include<bits/stdc++.h>
using namespace std;
int sum1 = 0;
int sum(int i,int n){
    if(i>n){
        return sum1;
    }
    sum1= sum1 +i;
    sum(i+1,n);
}
// parameterized rec
void summation(int i , int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    summation(i-1,sum+i);
}

int main(){
     int val = sum(1,10);
     cout<<val << endl;
     summation(10,0);
}