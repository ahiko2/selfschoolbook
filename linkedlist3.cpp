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
void showlist(Node *node){
    cout<<"list :";
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }

}//insert in n place
// <link> <here> <link>
// so, when we want to insert at n place, we sure make <n-1> node 
// change pointing to new node (which is creating as temp), then
// connect n node to (n+1) place. (n-2)->(n-1)->(n)->(n+1) 

//1 more thing, we need to declare head as global value

//in here, we pass 2 parameter, which is data(input) and position as n place

void insert(Node **head,int data,int position){
  Node *temp1=new Node();
  temp1->data=data;
  temp1->next=NULL;
    //so, when insert position 1, we can follow the usual route, Aren’t we?
  if(position==1){
    temp1->next=*head; 
    *head=temp1;
    return;
  }
     //the reason why we do n-2 is because i start at 0,
    //if we want to do (n-1), go on, but remember to set i as 1
  Node *current_node=*head;
    for(int i=0;i<position-2;i++)//to traverse current_node through the nodes
    {
        current_node=current_node->next;//to point current_node to (n-1)th node after loop
    }
    temp1->next=current_node->next;// point new (nth)node to next node
    current_node->next=temp1;// to point the previous( n-1 th) node to new node
  
}
int main(){
    Node *head=NULL;
    insert(&head,2,1);
    insert(&head,4,1);
    insert(&head,3,3);
    insert(&head,3,1);

    showlist(head);

}
