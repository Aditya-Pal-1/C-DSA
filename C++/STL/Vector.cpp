#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.emplace_back(2);
    for(auto it  : v){
        cout<< it << " ";
    }
    cout<<"\n";
    vector<pair<int, int>> vec ;
    // vec.push_back({1,2});
    // vec.emplace_back(4,7);
    // vector<int> vec1(5,100);
    // vector<int>vec2(vec1);
    // Iterator
    vector<int> :: iterator it = v.begin();
    // it++;
    // cout << *(it) <<" ";
    it+=2;
    // cout<<*(it)<<" ";
    vector<int>::iterator it1 = v.end();
    vector<int>:: reverse_iterator it2 = v.rend();
    vector<int>::reverse_iterator it3 = v.rbegin();

    // cout<<v[0]<<" "<< v.at(0);
    // cout<<v.back();
    // for loop 
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout<<*(it) << " ";
    // }
    // for(auto it = v.begin() ; it != v.end(); it++){
    //     cout<<*(it) << " ";
    // }
    // for(auto it  : v){
    //     cout<< it << " ";
    // }

    // Deleting
    // v.erase(v.begin()+1);
    // for(auto it  : v){
    //     cout<< it << " ";
    // }
    v.erase(v.begin()+1, v.begin()+4);
    for(auto it  : v){
        cout<< it << " ";
    }
    cout<<"\n";
   
    // Insert
    vector<int>vec2(2,100);
    for(auto it  : vec2){
        cout<< it << " ";
    }
    cout<<"\n";
    vec2.insert(vec2.begin(),200);
    for(auto it  : vec2){
        cout<< it << " ";
    }
    cout<<"\n";
    vec2.insert(vec2.begin()+1,2,500);
    for(auto it  : vec2){
        cout<< it << " ";
    }
    cout<<"\n";
    vector<int> copy(2,50);
    vec2.insert(vec2.begin(),copy.begin(),copy.end());
    for(auto it  : vec2){
        cout<< it << " ";
    }
    cout<<"\n";
    cout<<vec2.size();
    cout<<"\n";
    vec2.pop_back();
    for(auto it  : vec2){
        cout<< it << "this is pop_back ";
    }
    cout<<"\n";
    vec2.swap(v);
    for(auto it  : v){
        cout<< it << " ";
    }
    cout<<"\n";
    vec2.clear();
    vec2.empty();
    for(auto it  : vec2){
        cout<< it << " ";
    }

}

