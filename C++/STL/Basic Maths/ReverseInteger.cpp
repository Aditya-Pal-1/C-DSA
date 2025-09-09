#include<bits/stdc++.h>
using namespace std;

int reverseInteger(int n){
    bool negative = n<0;
    if(negative){
        n = - n;
    }
    int revnum = 0 ;
    while (n > 0)
    {
        int lastdigit = n % 10;
        revnum = (revnum*10)+lastdigit;
        n=n/10;
    }
    if(negative){
        revnum = - revnum;
    }
        return revnum; 
}
int main(){
    int number = reverseInteger(5687);
    cout<< number<<"";
}