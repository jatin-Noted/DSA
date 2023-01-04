#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string increment(string str, int k){
    string result = "";
    for(int i = 0; i<str.size(); i++){
        if(str.at(i)+k > 'z'){
            result.push_back(str.at(i) + k - 26);
        }
        else{
            result.push_back(str.at(i) + k);
        }
    }
    return result;
}
 
int main (){
  
    string str = "qwerty";

    string result = increment(str, 30);
    cout<<result;
  
    return 0;
}