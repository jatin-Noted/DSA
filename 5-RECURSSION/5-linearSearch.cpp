#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int * arr, int n, int element){
    
    if(arr[0] == element){
        return true;
    }
    if(n == 0){
        return false;
    }
    else{
        return linearSearch(arr+1, n-1, element);
    }
}
 
int main (){
  
    int arr[5] = {1,2,3,4,5};

    if(linearSearch(arr, 5, 6)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}