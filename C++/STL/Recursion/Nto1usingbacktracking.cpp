#include<bits/stdc++.h>
using namespace std;
void printNos(int i, int n){
    if(i==0){
        return;
    }
    printNos(i+1,n);
    cout <<i<<" ";
}
int main(){
    printNos(1,10);
}