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

bool detectLoop_1(node *& head){
    node * temp = head;
    map<node*, bool>visited;

    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        else{
            visited[temp] = true;
        }
        temp = temp->next;
    }
    return false;
}

bool detectLoop_2(node *& head){ //floyd detect loop algorithm
    node * fast = head;
    node * slow = head;
    while(fast){
        fast = fast->next;
        slow = slow->next;
        if(fast != NULL){
            fast = fast->next;
        }
        if(fast == slow){
            return true;
        }
    }
    return false;
}

node * detectAnyLoopNode(node *& head){ //floyd detect loop algorithm
    node * fast = head;
    node * slow = head;
    while(fast){
        fast = fast->next;
        slow = slow->next;
        if(fast != NULL){
            fast = fast->next;
        }
        if(fast == slow){
            return slow;
        }
    }
    return NULL;
}

node * startingLoopNode_1(node *& head){
    node * temp = head;
    map<node*, bool>visited;
    while(temp != NULL){
        if(visited[temp] == true){
            return temp;
        }
        else{
            visited[temp] = true;
        }
        temp = temp->next;
    }
    return NULL;
}

node * startingLoopNode_2(node * head){
    node * intersection = detectAnyLoopNode(head);
    node * slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(node *& head){
    node * startingNode = startingLoopNode_2(head);
    node * temp = startingNode;
    while(temp->next != startingNode){
        temp = temp->next;
    }
    temp->next = NULL;
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

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node4;

    if(detectLoop_1(head)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    if(detectLoop_2(head)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    node * temp = detectAnyLoopNode(head);
    cout<<temp->data<<endl;

    node * temp_2 = startingLoopNode_1(head);
    cout<<temp_2->data<<endl;

    node * temp_3 = startingLoopNode_2(head);
    cout<<temp_3->data<<endl;

    removeLoop(head);
  
    if(detectLoop_1(head)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}