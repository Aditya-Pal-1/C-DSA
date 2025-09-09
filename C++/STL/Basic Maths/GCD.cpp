#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 12;
    int b = 9;
    int gcd = 1;
    for (int i = min(a,b); i >= 1; i--)
    {
        if((a % i) == 0 && (b % i)== 0){
            gcd = i;
            break;
        }
    }
    cout<< gcd << "";
}