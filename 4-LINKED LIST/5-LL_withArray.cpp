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

void createNodeArray(node *& head, node *& tail, int * arr, int n){
    node * node1 = new node(arr[0]);
    head = node1;
    tail = node1;
    node * ptr = NULL;

    for(int i = 1; i<n; i++){
        ptr = new node(arr[i]);
        tail->next = ptr;
        tail = ptr;
    }
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
  
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    node * head = NULL;
    node * tail = NULL;

    createNodeArray(head, tail, arr, size);
    printLL(head);
    
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
  
    return 0;
}