#include <iostream>
#include <cstdlib>
#include <ctime>
#define size 5
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void push(Node** head,int data){
    
    Node* newnode=new Node();
    
    newnode->data=data;
    
    
    if(*head==NULL){
        newnode->next=NULL;
        *head=newnode;
    }
    
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
/*
until here, we do the usual thing, from here, we will introduce the 
circular single linked list. In all previous lesson, we tried with singlar
straight linked list and this time, circular linkedlist.
To declarify this, 
 (n1)->(n2)->(n3)->null. right? (n3)-> next is pointing to null.
 and now, we change (n3)->(n1)->(n2)->(n3)->... as it repeated.
 the only different is head. the head reached the last node, all 
 we have to do is pointed back like (head=head->next), which mean (n)->become 
 head again. tada....

 finished. see? how easy isnt it?
and this is my own thinking, like? why Don’t we just delcare function
that automatically make circular system.
Let’s get start!!!!
*/
Node *circular(Node *head)
{
    //first store current process node here (head)->(start)
    Node *start=head;
    //transversal (going node to node)
    while(head->next!=NULL){
        head=head->next;
    }
    //here, (head->next) is the last node, the start is linked node.
    //this make connect each other.
    head->next=start;
    //and we return start(linked node)
    return start;
}


int main(){
    Node *head;    
    head=NULL;
    int data;   
    srand(time(NULL));  

    for(int i=0;i<size;i++){
        data=rand()%100;
        push(&head,data);
        cout<<data<<" ";
    }
    cout<<endl;
    showlist(head);
    circular(head);
    cout<<endl;
    
    cout<<"second node:"<<head->next->data<<endl;
    cout<<"3rd node:"<<head->next->next->data;

}
