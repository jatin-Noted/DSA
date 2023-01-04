#include<bits/stdc++.h>
using namespace std;

int Swap(string & exp){

    if(exp.size() % 2 == 1){
        return -1;
    }

    stack<char> st;

    for(int i = 0; i < exp.size(); i++){
        char ch = exp[i];
        if(ch == '('){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    int countOpen = 0, countClose = 0;

    while(!st.empty()){
        if(st.top() == '('){
            countOpen++;
        }
        else{
            countClose++;
        }
        st.pop();
    }

    int ans = (countOpen + 1)/2 + (countClose + 1)/2;
    return ans;
}
 
int main (){
  
    string str = "(((a+b)";

    int ans = Swap(str);

    cout<<ans;
  
    return 0;
}