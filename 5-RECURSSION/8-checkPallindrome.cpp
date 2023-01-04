#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool checkPallindrome(string str, int s, int e){
    if(s > e){
        return true;
    }
    if(str.at(s) != str.at(e)){
        return false;
    }
    else{
        return checkPallindrome(str, s+1, e-1);
    }
}
 
int main (){
  
    string str = "JATIN";

    if(checkPallindrome(str, 0, str.size()-1)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}