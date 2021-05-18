adding node at any position while setting head valuable as global.
my own method
_________________________________________
| void insert(int data){                 |
|        struct Node* temp=new Node();   |
|        temp->data=data;                |
|        temp->next=head;                |
|        head=temp;                      |
|    }                                   |
|________________________________________|
////
head as local valuable
_________________________________________
void addnode(NEW_TYPE *head,int data){
    NEW_TYPE *newnode=(NEW_TYPE*)malloc(sizeof(NEW_TYPE));
    newnode->value=data;
    newnode->next=head->next;
    head->next=newnode;

    cout<<newnode->value<<" ";
    cout<<endl;
}
**BE SURE TO DECLARE IN MAIN OR AS VOID FUNCTION**
_________________________________________
///
inserting node in N-position
head as global
_______________________________________
void insertnplace(int data,int pos){
      Node *temp1=new Node();
      temp1->data=data;
        temp1->next=NULL;
       
      if(pos==1){
        temp1->data=data;
        temp1->next=head;
        head=temp1; 
      }
      Node *temp2=head;
      for(int i=0;i<pos-2;i++){
        if(temp2 != NULL)temp2=temp2->next;
      }
      temp1->next=temp2->next;
      temp2->next=temp1;

    }
 _________________________________________

