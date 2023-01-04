#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int>& arr){
    stack<int> st;
    st.push(-1);
    vector<int> ans(arr.size());

    for(int i = arr.size()-1; i >= 0; i--){
        int curr = arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmaller(vector<int>& arr){
    stack<int> st;
    st.push(-1);
    vector<int> ans(arr.size());

    for(int i = 0; i <= arr.size(); i++){
        int curr = arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestArea(vector<int>& arr){
    vector<int> next(arr.size());
    next = nextSmaller(arr);

    vector<int> prev(arr.size());
    prev = prevSmaller(arr);

    int area = INT_MIN;

    for(int i = 0 ; i < arr.size(); i++){
        int length = arr[i];
        if(next[i] == -1){
            next[i] = arr.size();
        }
        int breadth = next[i] - prev[i] - 1;

        int newArea = length * breadth;
        area = max(area, newArea);
    }
    return area;
}
 
int main (){
  
    vector<int> heights = {3, 5, 1, 7, 5, 9};
    int area = largestArea(heights);

    cout<<area;
  
    return 0;
}