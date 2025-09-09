#include<bits/stdc++.h>
using namespace std;
int CountDigit(int n){
    int count = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        count++;
        n  = n / 10;
    }
    return count;
}
int CountDIgitUsingLog(int n){
    int cnt = int(log10(n)+1);
    return cnt;
}
int main(){
    int digit = CountDigit(653239);
    int LogDigit = CountDIgitUsingLog(653239);
    cout<< digit <<" " << LogDigit;
}


// when the iternation is done by using Division the time complexity will be always in log
