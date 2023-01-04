#include<bits/stdc++.h>
using namespace std;

bool isReduntant(string exp){
    stack<char>st;
    bool reduntant = false;

    for(int i = 0; i < exp.size(); i++){
        char ch = exp.at(i);

        if(ch == ')'){

                if(st.top() == '(' && !st.empty()){
                    reduntant = true;
                }
                else{
                    while(st.top() != '('){
                        st.pop();
                    }
                } 
               
        }
        else{
            st.push(exp[i]);
        }
    }
    if(reduntant == true){
        return true;
    }
    return false;
}
 
int main (){
  
    string exp = "((a+B))";
    if(isReduntant(exp)){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}