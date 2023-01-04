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

int count(node *& head){
    int count = 0;
    node * temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int countRecursive(node * head){
    node * temp = head;
    if(temp == NULL){
        return 0;
    }
    else{
        return countRecursive(temp->next) + 1;
    }
}

int sum(node *& head){
    int x = 0;
    node * temp = head;
    while(temp != NULL){
        x += temp->data;
        temp = temp->next;
    }
    return x;
}

int sumRecursive(node *& head){
    node * temp = head;
    if(temp == NULL){
        return 0;
    }
    else{
        return sumRecursive(temp->next) + temp->data;
    }
}

int minimim(node *& head){
    node * temp = head;
    int min = INT_MAX;

    while(temp != NULL){
        if(temp->data < min){
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;
}

int maximum(node *& head){
    node * temp = head;
    int max = INT_MIN;

    while(temp != NULL){
        if(temp->data > max){
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}

bool linearSearch(node *& head, int x){
    node * temp = head;
    while(temp != NULL){
        if(temp->data == x){
            return true;
        }
        temp = temp->next;
    }
    return false;
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


    int cnt = count(head);
    int cntRcrsv = countRecursive(head);
    int add = sum(head);
    int addRcrsv = sumRecursive(head);
    int min = minimim(head);
    int max = maximum(head);

    cout<<cnt<<endl
        <<cntRcrsv<<endl
        <<add<<endl
        <<addRcrsv<<endl
        <<min<<endl
        <<max<<endl;
        
    if(linearSearch(head, 90)){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}