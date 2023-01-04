#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string replace(string str){
    string temp = "";
    for(int i = 0; i<str.size(); i++){
        if(str.at(i) == ' '){
            temp.push_back(' ');
            temp.push_back('@');
            temp.push_back('$');
            temp.push_back('%');
            temp.push_back(' ');
        }
        else{
            temp.push_back(str.at(i));
        }
    }
    return temp;
}
 
int main (){
  
    string str = "the sky is blue";

    string result = replace(str);
    cout<<result;  
  
    return 0;
}