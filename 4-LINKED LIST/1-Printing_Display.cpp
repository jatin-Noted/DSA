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

void printLL(node *& head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void recursiveDisplay(node *& head){
    node * temp = head;
    if(temp != NULL){
        cout<<temp->data<<" ";
        recursiveDisplay(temp->next);
    }
    
}

void recursiveReverseDisplay(node *& head){
    node * temp = head;
    if(temp != NULL){
        recursiveReverseDisplay(temp->next);
        cout<<temp->data<<" ";
    }
    
}
 
int main (){
  
    node * head = NULL;
    node * tail = NULL;

    node * node1 = new node(10);
    node * node2 = new node(20);
    node * node3 = new node(30);
    node * node4 = new node(40);
    node * node5 = new node(50);
    node * node6 = new node(60);
    node * node7 = new node(70);

    head = node1;
    tail = node7;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = NULL;

    printLL(head);
    recursiveDisplay(head);

    cout<<endl;
    
    recursiveReverseDisplay(head);
  
    return 0;
}