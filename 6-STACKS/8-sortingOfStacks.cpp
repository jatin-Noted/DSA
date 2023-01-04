#include<bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int>& st, int x){

    if(st.empty() || (st.top() < x && !st.empty())){
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();
    sortedInsert(st, x);
    st.push(top);
}

void sorting(stack<int>& st){
    if(st.empty()){
        return;
    }
    int top = st.top();
    st.pop();
    sorting(st);

    sortedInsert(st, top);
}
 
int main (){
  
    stack<int> st;

    st.push(13);
    st.push(43);
    st.push(73);
    st.push(18);
    st.push(14);
    st.push(17);
    st.push(73);
    st.push(49);

    sorting(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
  
    return 0;
}