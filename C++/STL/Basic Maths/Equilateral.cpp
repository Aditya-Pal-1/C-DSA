#include<bits/stdc++.h>
using namespace std;
int main(){
    int a= 12;
    int b = 15;
    while (a>0 and b> 0)
    {
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a == 0){
        cout<< b << "gcd";
    }
    else{
        cout<< a << " gcd";
    }
    
}