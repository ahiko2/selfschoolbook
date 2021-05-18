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

//2. insert 
//2 parameters here, 1 for new node and the other one for data passing

void insertlist(Node** head,int data){
    //create new node again to pass data to head
    Node* newnode=new Node();
    //data pass
    newnode->data=data;
    //lead to nex node, and check if head(current)is null or not
    //if null, create new node and point it
    if(*head==NULL){
        newnode->next=NULL;
        *head=newnode;
    }
    //if it is not null,node point to next node as head and ot become newnode.
    else{
        newnode->next=*head;
        *head=newnode;
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
        insertlist(&head,data);
        cout<<data<<" ";
    }
    showlist(head);

}
