#include<bits/stdc++.h>
using namespace std;
void prinNos(int i, int n){
    if(n < i){
        return;
    }
    prinNos(i+1, n);
    cout<< i<< " ";

}

int main(){
    prinNos(1,5);
}