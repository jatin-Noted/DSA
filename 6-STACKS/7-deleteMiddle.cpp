#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& st, int i, int size){
    if(i == size/2){
        st.pop();
        return;
    }
    int top = st.top();
    st.pop();
    solve(st, i+1, size);
    st.push(top);
}

void deleteMiddle(stack<int>& st, int size){
    int i = 0;
    solve(st, i, size);
}
 
int main (){
  
    stack<int> st;
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    st.push(17);
    st.push(18);

    deleteMiddle(st, st.size());

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
  
    return 0;
}