#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 8;
    int cnt =0;
    for (int i = 1; i*i <= x; i++)
    {
        if(x%i == 0){
            cnt++;
            if((x/i) != i){
                cnt++;
            }
        }
    }
    if(cnt == 2){
        cout<< x << " is prime number";
    }
    else{
        cout<< x << " is not prime ";
    }
}