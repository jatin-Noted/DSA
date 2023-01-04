#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string removeOcc(string str, string part){
    while(str.size() != 0 && part.size() < str.size()){
        str.erase(str.find(part), part.size());
    }
    return str;
}
 
int main (){
  
    string str = "daabcbaabcbc";
    string part = "abc";

    string result = removeOcc(str, part);
    cout<<result;
  
    return 0;
}