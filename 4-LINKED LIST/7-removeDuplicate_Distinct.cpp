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

void removeDup(node *& head){
    node * p = head;
    node * q = head->next; 
    while(q != NULL){
        if(p->data == q->data){
            node * del = q;
            q = q->next;
            p->next = q;
            del->next = NULL;
            delete del;
        }
        else{
            p = q;
            q = q->next;
        }   
    }
}

node * removeDup2(node *& head){
    node * p = head;
    node * q = head->next; 
    while(q != NULL){
        if(p->data == q->data){
            node * del = q;
            q = q->next;
            p->next = q;
            del->next = NULL;
            delete del;
        }
        else{ // v.v.v.v.v.v.imp to write else....without else, it will give wrong output...
            p = q;
            q = q->next;
        }   
    }
    return head;
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
    insertPosition(head, tail, 40, 4);
    insertPosition(head, tail, 40, 5);
    insertPosition(head, tail, 60, 6);
    insertPosition(head, tail, 60, 7);
    insertPosition(head, tail, 60, 8);

    printLL(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    removeDup(head);
    printLL(head);

    node * first = removeDup2(head);
    printLL(first);
  
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