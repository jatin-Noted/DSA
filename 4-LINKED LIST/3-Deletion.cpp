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


void deleteHead(node *& head){

    if(head == NULL){
        return;
    }

    node * del = head;
    head = head->next;
    del->next = NULL;
    delete del;
}

void deleteTail(node *& head, node *& tail){
    if(tail == NULL){
        return;
    }
    node * temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    node * del = temp->next;
    tail = temp;
    tail->next = NULL;
    delete del;

    // node * p = head;
    // node * q = head->next;
    // while(q->next != NULL){
    //     p = q;
    //     q = q->next;
    // }
    // tail = p;
    // tail->next = q->next;
    // delete q;

}

void deletePosition(node *& head, node *& tail, int pos){
    if(pos == 1){
        deleteHead(head);
        return;
    }
    int count = 1;
    node * temp = head;
    
    while(count < pos-1){
        temp = temp->next;
        count++;
    }

    if(temp->next->next == NULL){
        deleteTail(head, tail);
        return;
    }

    node * del = temp->next;
    temp->next = del->next;
    del->next = NULL;
    delete del;
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
    insertPosition(head, tail, 50, 5);

    insertPosition(head, tail, 1, 1);
    insertPosition(head, tail, 2, 1);
    insertPosition(head, tail, 3, 1);

    insertPosition(head, tail, 60, 5);

    insertPosition(head, tail, 70, 10);

    printLL(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;


    deletePosition(head, tail, 2);
    printLL(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deletePosition(head, tail, 1);
    printLL(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deletePosition(head, tail, 8);
    printLL(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
  
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