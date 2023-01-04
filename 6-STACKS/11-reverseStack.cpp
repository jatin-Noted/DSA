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

void reverseStack(stack<int>& st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    reverseStack(st);
    solve(st, num);
}
 
int main (){
  
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    reverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
  
    return 0;
}