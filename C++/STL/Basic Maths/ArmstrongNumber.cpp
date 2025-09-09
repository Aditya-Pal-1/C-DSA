#include<bits/stdc++.h>
#include <cmath>
using namespace std;
bool armStrongNum(int x){
    int dup1 = x;  
    int sum = 0;
    int dig = 0;
    cout<< "Dup 1  " << dup1 <<endl;
    while (x != 0) {
        x = x / 10;
        dig++;
    }
    cout<< "dig" << dig <<endl;
    x = dup1; 
    while (x > 0) {
        cout<<"x value" << x <<endl;
        int lastDigit = x % 10;
        cout<< "lastdigit" << lastDigit <<endl;
        cout<< "before sum" <<sum <<endl;
        sum = sum + pow(lastDigit, dig); 
        cout<< pow(lastDigit, dig) << endl;
        cout<< "after sum" <<sum <<endl;
        x = x / 10;
        cout<<"x value" << x <<endl;
    }
    cout<< sum <<endl;
    return dup1 == sum;
}

int main() {
    int num = 371;
    if (armStrongNum(num)) {
        cout << num << " is an Armstrong number" << endl;
    } 
    else {
        cout << num << " is not an Armstrong number" << endl;
    }
    return 0;
}