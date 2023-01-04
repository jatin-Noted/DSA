#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string reverse(string str, int s, int e){
    if(s > e){
        return str;
    }
    swap(str.at(s), str.at(e));
    return reverse(str, s+1, e-1);
}
 
int main (){
  
    string str = "Jatin Singh";
    cout<<reverse(str, 0, str.size()-1);
  
    return 0;
}