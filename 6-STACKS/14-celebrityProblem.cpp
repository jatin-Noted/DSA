#include<bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>>& arr, int x, int y){
    if(arr[x][y] == 1){
        return true;
    }
    return false;
}

int celebrity(vector<vector<int>>& arr){
    //everyOne knows celebrity
    //celebrity knows no-one

    int n = arr.size();
    stack<int> st;

    for(int i = 0 ; i < n; i++){
        st.push(i);
    }
    while(st.size() > 1){
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();

        if(knows(arr, a, b)){
            st.push(b);
        }
        else{
            st.push(a);
        }
    }
    int candidate = st.top();

    int zeroCount = 0, oneCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[candidate][i] == 0){
            zeroCount++;
        }

        if(arr[i][candidate] == 1){
            oneCount++;
        }
    }

    if(zeroCount != n){
        return -1;
    }
    if(oneCount != n-1){
        return -1;
    }
    return candidate;

}
 
int main (){
  
    vector<vector<int>>arr {{0,0,0},
                            {0,0,0},
                            {0,0,0}};

    int ans = celebrity(arr);
    cout<<ans;
  
    return 0;
}