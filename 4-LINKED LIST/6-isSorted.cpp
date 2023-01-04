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

void insertHead(node *& head, node *& tail, int x);
void insertTail(node *& head, node *& tail, int x);
void insertPosition(node *& head, node *& tail, int x, int pos);

bool isSorted(node *& head){
    node * temp = head;
    while(temp->next != NULL){
        if(temp->data > temp->next->data){
            return false;
        }
        temp = temp->next;
    }
    return true;
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
  
    node * head = NULL;
    node * tail = NULL;

    insertPosition(head, tail, 10, 1);
    insertPosition(head, tail, 20, 2);
    insertPosition(head, tail, 30, 3);
    insertPosition(head, tail, 40, 2);

    printLL(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    if(isSorted(head)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}

void insertHead(node *& head, node *& tail, int x){

    if(head == NULL){
        node * ptr = new node(x);
        head = ptr;
        tail = ptr;
    }
    else{
        node * ptr = new node(x);
        ptr->next = head;
        head = ptr;
    }
}

void insertTail(node *& head, node *& tail, int x){
    if(tail == NULL){
        node * ptr = new node(x);
        head = ptr;
        tail = ptr;
    }
    else{
        node * ptr = new node(x);
        tail->next = ptr;
        tail = ptr;
    }
}

void insertPosition(node *& head, node *& tail, int x, int pos){
    if(pos == 1){
        insertHead(head, tail, x);
        return;
    }

    int count = 1;
    node * temp = head;

    while(count < pos-1){
        count++;
        temp = temp->next;
    }

    if(temp->next == NULL){
        insertTail(head, tail, x);
        return;
    }
    node * ptr = new node(x);
    ptr->next = temp->next;
    temp->next = ptr;
}