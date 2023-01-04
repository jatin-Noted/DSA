#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int>& arr){
    stack<int> st;
    st.push(-1);

    vector<int> ans(arr.size());

    for(int i = arr.size() - 1; i >= 0; i--){
        int curr = arr[i];
        while(st.top() != -1 && st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

vector<int> prevSmaller(vector<int>& arr){
    stack<int> st;
    vector<int> ans(arr.size());
    st.push(-1);

    for(int i = 0; i < arr.size(); i++){
        int curr = arr[i];
        while(st.top() != -1 && curr <= st.top()){
            st.pop();
        }
        ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}
 
int main (){
  
    vector<int> arr{2,1,4,3};
    vector<int> result1;
    vector<int> result2;

    result1 = nextSmaller(arr);

    for(int i = 0; i < result1.size(); i++){
        cout<<result1[i]<<" ";
    }
    cout<<endl;

    result2 = prevSmaller(arr);

    for(int i = 0; i < result2.size(); i++){
        cout<<result2[i]<<" ";
    }
  
    return 0;
}