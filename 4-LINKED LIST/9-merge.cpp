#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node * next;

        node(int data){
            this->data = data;
            this->next = NULL;
        }
        ~node(){
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
        }
};

node * merge(node * first, node * second){
    node * ans = new node(-1);
    node * tail = ans;
    while(first != NULL && second != NULL){
        if(first->data < second->data){
            tail->next = first;
            tail = tail->next;
            first = first->next;
        }
        else{
            tail->next = second;
            tail = tail->next;
            second = second->next;
        }
    }
    while(first != NULL){
        tail->next = first;
        tail = tail->next;
        first = first->next;
    }
    while(second != NULL){
        tail->next = second;
        tail = tail->next;
        second = second->next;
    }

    node * result = ans->next;
    ans->next = NULL;
    delete ans;
    return result;
}

void printLL(node *& head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
 
int main (){
  
    node * first = NULL;
    node * second = NULL;

    node * node1 = new node(10);
    node * node2 = new node(20);
    node * node3 = new node(30);
    node * node4 = new node(40);
    node * node5 = new node(50);
    node * node6 = new node(50);
    node * node7 = new node(50);

    first = node1;
    second = node4;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = NULL;

    node * temp = merge(first, second);
    printLL(temp);
  
    return 0;
}