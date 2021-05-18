#include <iostream>
#include <cstdlib>
#include <ctime>
#define size 5
using namespace std;
//1. create the node type here
struct Node{
    int data;
    struct Node *next;
};
//In here, we will show you you the linked list of inserting in the middle
//When we insert new node in the front and end of node, 
//all we have to do is,
//for front, [new node] -> [existing linked list]

//in back, [existing linked list] -> [new node] (this is already explained in linkedlist_1.cpp)
//1->2->3->4->5 will stack 
//so, Let’s get start from insert at back

void insert_back(Node **back,int data){
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=NULL;

    //as usual check if head node is null or not
    if(*back==NULL){
        *back=newnode;
    }
    else{
    //so here, we name back node as lastnode and continue to connect
    //node as input data is not NULL. 
        Node *lastnode=*back;
        while(lastnode->next!=NULL){
    //here, connecting node (leading lastnode->next to lastnode)
    //ps:
            lastnode=lastnode->next;
        }
        lastnode->next=newnode;
    }
}

void showlist(Node *node){
    cout<<"list :";
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }

}
int main(){
    Node *head;    //first head is pointed to -> null and none of data existed 
    head=NULL;
    int data;   //create data to generate new random number to place inside node
    srand(time(NULL));  //make sure that random number is repeated

    for(int i=0;i<size;i++){
        data=rand()%100;
        insert_back(&head,data);
        cout<<data<<" ";
    }
    showlist(head);

}
