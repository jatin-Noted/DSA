#include<bits/stdc++.h>
using namespace std;

class twoStack{
    public:
        int * arr;
        int size;
        int top1, top2;

        twoStack(int size){
            this->size = size;
            arr = new int[size];
            top1 = -1;
            top2 = size;
        }

        void push1(int element){
            if(top2-top1 > 1){
                top1++;
                arr[top1] = element;
            }
            else{
                cout<<"Stack Overflow !"<<endl;
            }
        }
        void push2(int element){
            if(top2 - top1 > 1){
                top2--;
                arr[top2] = element;
            }
            else{
                cout<<"Stack Overflow !"<<endl;
            }
        }
        int pop1(){
            if(top1 >=0){
                int value = arr[top1];
                top1--;
                return value;
            }
            return -1;
        }
        int pop2(){
            if(top2 < size){
                int value = arr[top2];
                top2++;
                return value;
            }
            return -1;
        }
        int peek1(){
            if(top1 >= 0){
                return arr[top1];
            }
            return -1;
        }
        int peek2(){
            if(top2 < size){
                return arr[top2];
            }
            return -1;
        }
};
 
int main (){
  
    twoStack st(5);

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push1(50);

    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;

    st.push2(20);
    st.push1(20);
  
    return 0;
}