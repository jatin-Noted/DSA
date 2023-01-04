#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }

    int value = st.top();
    st.pop();
    solve(st, x);
    st.push(value);
}

void insertAtBottom(stack<int>& st, int x){
    solve(st, x);
}
 
int main (){
  
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    insertAtBottom(st, 70);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}