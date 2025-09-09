#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n<= 1){
        cout<<n<<" ";
        return n;
    }
    int rsult =f(n-1) +f(n-2);
    cout<< rsult <<" ";
    return rsult;
}

int main(){
    int n = 4;
    cout<<f(n);
}