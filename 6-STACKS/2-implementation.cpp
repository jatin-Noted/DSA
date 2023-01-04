#include<bits/stdc++.h>
using namespace std;

class Stack{

    public:
        int * arr;
        int size;
        int top;

        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if((size - top) > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"Stack Overflow !"<<endl;
            }
        }
        int pop(){
            if(top >= 0){
                int value = arr[top];
                top--;
                return value;
            }
            else{
                cout<<"Stack Underflow !"<<endl;
            }
        }
        int peek(){
            if(top >= 0){
                return arr[top];
            }
            return -1;
        }
        bool isEmpty(){
            if(top == -1){
                return true;
            }
            return false;
        }
};
 
int main (){
  
    Stack st(5);

    st.push(5);
    st.push(35);
    st.push(45);
    st.push(55);
    st.push(25);

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"YES !";
    }
    else{
        cout<<"NO !";
    }

  
    return 0;
}