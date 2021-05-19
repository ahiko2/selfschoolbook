#include <iostream>
#include <cstdlib>
#include <ctime>
#define size 5
using namespace std;
//4. So, after creating and inserting at nth position, time to destory node (fufufu
//so the original node is 100->200->300->400->500
//then we wrote deletenode(200), node will become 100-300->400->500

//before we go on that, Let’s create new node and old stuff (copy no.1)
struct Node{
    int data;
    struct Node *next;
};
void displayList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
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

//finally Let’s get start!
//so as usual we will declare function called deletenode
//here, we call head and val as node to delete (BY POSITION)
void deletee(Node **head,int pos){
    Node *temp1=new Node();
    
    temp1=*head;
    if(pos==1){
        *head=temp1->next;
        free(temp1);
        return;
    }
    for(int i=0;i<pos-2;i++){
        temp1=temp1->next;
    }
    Node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}


int main(){
    Node *head;    
    head=NULL;
    int data;   
    srand(time(NULL));  

    for(int i=0;i<5;i++){
        data=rand()%100;
        push(&head,data);
        
    }
    displayList(head);
    // cout<<endl;
    int k;
    cin>>k;
    deletee(&head,k);
    cout<<"after :";
    displayList(head);
    

}
