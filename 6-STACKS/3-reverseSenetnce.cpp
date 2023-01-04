#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
    string ans = "";
    stack<char> s;

    for(int i = 0; i < str.size(); i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    return ans;
}
 
int main (){
  
    string name = "Jatin";
    string ans = reverse(name);
    cout<<ans;
  
    return 0;
}