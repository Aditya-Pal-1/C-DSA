#include<bits/stdc++.h>
#include<cmath>
using namespace std;
void allDivision(int n){
    vector<int> ls;
    // for ( int i = 1; i <= n; i++)
    // {
    //     if(n % i == 0){
    //         cout<< i << " ";
    //     }
    // }
    for (int i = 1; i<= sqrt(n); i++)
    {
        if((n % i)== 0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls){
        cout<< it << " ";
    } 
    
}

int main(){
    allDivision(36);
}