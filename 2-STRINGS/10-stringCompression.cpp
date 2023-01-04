#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string compress(string str) 
    {
        string ans = "" ;
        int i = 0; 

        while(i < str.size()){
            int j = i+1;
            while(j < str.size() && str.at(i) == str.at(j)){
                j++;
            }
            ans.push_back(str.at(i));
            int count = j-i;
            if(count > 1){
                string temp = to_string(count); // Instead of 'char temp' we've used 'string temp' bcz count can be of 2 digits also...

                for(int i = 0; i < temp.size(); i++){
                    ans.push_back(temp.at(i));
                }
            }
            i = j;            
        }

        return ans;

    
    //     int i =0;
    //     int answerind=0;
    //     int n = chars.size();
        
    //     while(i<n)
    //     {
    //         int j = i+1;
    //         while(j<n && chars[i]==chars[j]){
    //             j++;
    //         }
            
    //         chars[answerind++] = chars[i];
            
    //         int count = j-i;
    //         if(count > 1){
    //             string cnt = to_string(count);
    //                 for(char ch : cnt){
    //                 chars[answerind++]=ch;
    //             }
    //         }
    //          i=j;
    //     }
    //    return answerind;
        
    }
 
int main (){
  
    string str = "aabbcccdddddfghijkl";

    string result = compress(str);
    cout<<result;

    // int ans = compress(str);
    // cout<<ans;
  
    return 0;
}