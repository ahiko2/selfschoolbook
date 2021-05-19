#include<iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Node{
    int data;
    Node* next;

};
//as ususal last one become head node
void pushinsert(Node **head,int data){
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL){
        newnode->next=NULL;
        *head=newnode;
    }
    else{
        newnode->next=*head;
        *head=newnode;
    }
}
int popping(Node **topdata){
    int data;
    Node *temp;
    if(*topdata==NULL){
        cout<<"list empty";
    }
    
    data=(*topdata)->data;
    temp=(*topdata);
    (*topdata)=(*topdata)->next;
    free(temp);

    return data;
}
void printlist(Node *head){
    if(head==NULL){
        cout<<"empty list";
        return;
    }
    cout<<"list :";
    while(head!=NULL){

        cout<<head->data<<" ";
        head=head->next;
        
    }

}
int main(){
    Node *head;    //first head is pointed to -> null and none of data existed 
    head=NULL;
    int data;   //create data to generate new random number to place inside node
    srand(time(NULL));  //make sure that random number is repeated

    for(int i=0;i<5;i++){
        data=rand()%100;
        pushinsert(&head,data);
        cout<<data<<" ";
    }
    
    cout<<endl;
    printlist(head);
    
    cout<<endl;
    cout<<"pop time"<<endl;
    for(int i=0;i<4;i++){
        popping(&head);
    }
    printlist(head);
}
