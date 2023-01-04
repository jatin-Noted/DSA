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

node * sort_1(node *& head){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    node * temp = head;

    while(temp != NULL){
        if(temp->data == 0){
            count0++;
        }
        else if(temp->data == 1){
            count1++;
        }
        else{
            count2++;
        }
        temp = temp->next;
    }

    temp = head;

    while(temp != NULL){
        if(count0 != 0){
            temp->data = 0;
            count0--;
        }
        else if(count1 != 0){
            temp->data = 1;
            count1--;
        }
        else if(count2 != 0){
            temp->data = 2;
            count2--;
        }
        temp = temp->next;
    }
    return head;
}

void insertTail(node * tail, node * temp){
    tail->next = temp;
    tail = temp;
}

node * sort_2(node *& head){
    node * headZero = new node(-1);
    node * headOne = new node(-1);
    node * headTwo = new node(-1);

    node * tailZero = headZero;
    node * tailOne = headOne;
    node * tailTwo = headTwo;

    node * temp = head;

    while(temp != NULL){
        int value = temp->data;
        if(value == 0){
            insertTail(tailZero, temp);
        }
        else if(value == 1){
            insertTail(tailOne, temp);
        }
        else if(value == 2){
            insertTail(tailTwo, temp);
        }
        temp = temp->next;
    }

    if(headOne->next != NULL){
        tailZero->next = headOne->next;
    }
    else{
        tailZero->next = headTwo->next;
    }
    tailOne->next = headTwo->next;
    tailTwo->next = NULL;

    head = headZero->next;

    delete headZero;
    delete headOne;
    delete headTwo;

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

    node * node1 = new node(0);
    node * node2 = new node(1);
    node * node3 = new node(2);
    node * node4 = new node(2);
    node * node5 = new node(1);
    node * node6 = new node(0);
    node * node7 = new node(0);

    head = node1;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = NULL;

    // head = sort_1(head);
    // printLL(head);

    head = sort_2(head);
    printLL(head);
  
    return 0;
}