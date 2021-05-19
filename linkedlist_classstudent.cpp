#include<iostream>
#include <vector>
#include <fstream>
using namespace std;

class Student{

    //declare node here, and as well as data inside node
    struct infostudent{
        string name;
        int id,gpa;
        infostudent *next;
    };
    //declare node, which is gonna used as head part and end 
    private:
    infostudent* head,* end;
    public:
    //as usual, node begin to point null 
    Student(){
        head=NULL;
        end=NULL;
    }
    //menu to choice whatever user want to do
    int menu(){
        int option;
        cout<<"\n1.Register data\n2.Show data\nYour choice:"; cin>>option;
        return option;
    }
    //input data
    void NewData();
    //dealing with new input data (so That’s why it took node as parameter)
    void RegisterDATA(infostudent*);
    //show result
    void Display();
};
void Student::NewData(){
    //basic theme (create and point to null)
    infostudent *newnode=new infostudent();
    newnode->next=NULL;
    cout<<"name:"; cin>>newnode->name;
    cout<<"id:"; cin>>newnode->id;
    cout<<"gpa:"; cin>>newnode->gpa;

    //passto register
    RegisterDATA(newnode);

}
void Student::RegisterDATA(infostudent* newnode){
    if(head==NULL){
        //putting at back
        head=newnode;
        end=newnode;
    }
    else{
        end->next=newnode;
        end=newnode;
        end->next=NULL;
        
    }
}
void Student::Display(){
    //point out to header
    infostudent *newnode=head;
    int flag=0;
    while(newnode!=NULL){
        cout<<"name :"<<newnode->name<<endl;
        cout<<"id   :"<<newnode->id<<endl;
        cout<<"gpa  :"<<newnode->gpa<<endl;
        flag=1;
        newnode=newnode->next;
    }
    if(flag==0){
        cout<<"error";
    }
}
int main(){
    Student list;
    int choice;
    do{
        choice=list.menu();
        switch (choice)
        {
        case 1:
            list.NewData();
            break;
        case 2:
            list.Display();
            break;
        
        default:
            break;
        }
    }while(choice!=99);
    
    
}
