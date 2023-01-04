#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string wordReverse(string str){
    int i = 0, j = 0;
    string result = "", sub = "";

    while(i < str.size()){

        while(i < str.size() && str.at(i) == ' '){
        i++;
        }

        j = i+1;

        while(j < str.size() && str.at(j) != ' '){
            j++;
        }

        sub = str.substr(i, j-i);

        if(result.size() == 0){
            result = sub;
        }
        else{
            result = sub + " " + result;
        }
        i = j;
    }

    return result;

}
 
int main (){
  
    string str = "     the sky       is blue        ";

    string ans = wordReverse(str);
    cout<<ans;
  
    return 0;
}