#include<bits/stdc++.h>
using namespace std;
 int main(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(1);
    ls.push_front(10);
    ls.emplace_front(23);
    for(auto it : ls){
        cout<<it<<" ";
    }
    // stack
    stack <int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(3);
    st.top();
    st.pop();
    st.size();
    st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
    // Queue
    queue<int>q;
    q.push(1);
    q.emplace(5);
    q.back()+=5;
    q.back();
    q.front();
    q.pop();
    // Priority_queue largest element will be stored on top ----> Max heap
    priority_queue<int> p;
    p.push(3);
    p.emplace(9);
    p.top();
    p.pop();

    // Mean heap
    priority_queue<int , vector<int>, greater<int>> pq;
    pq.push(3);
    pq.emplace(1);
    p.top();
 }