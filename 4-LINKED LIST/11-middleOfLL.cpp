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

int getLen(node *& head){
    int count = 0;
    node * temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int getMidData(node *& head){
    int ans = getLen(head);
    int mid = -1;
    if(ans % 2 == 0){
        mid = ans/2;
    }
    else{
        mid = ans/2 + 1;
    }

    int count = 1;
    node * temp = head;
    while(count < mid){
        count++;
        temp = temp->next;
    }
    return temp->data;
}

node * getMidNode(node *& head){
    int ans = getLen(head);
    int mid = -1;
    if(ans % 2 == 0){
        mid = ans/2;
    }
    else{
        mid = ans/2 + 1;
    }

    int count = 1;
    node * temp = head;
    while(count < mid){
        count++;
        temp = temp->next;
    }
    return temp;
}

node * getMidNodeOptimized(node *& head){
    node * slow = head;
    node * fast = head->next;
    // node * fast = head; --> | WRONG |
    
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
    }
    return slow;
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
    int mid = getMidData(head);
    cout<<mid<<endl;

    node * temp = getMidNode(head);
    cout<<temp->data<<endl;

    node * temp2 = getMidNodeOptimized(head);
    cout<<temp2->data;
  
    return 0;
}