#include <stdio.h>
#include <stdlib.h>

#define MAX 128
#define Push_success 1
#define Push_fail -1
#define Pop_sucess 2
#define Pop_fail -2

int peek(int stack[],int *top,int *data)
{
    if(*top>0)
    {
        *data=stack[*top-1];
        return Pop_sucess;
    }
    else
    {
        return Pop_fail;
    }
    
}
//sa sa chin value a nay nae 0 ka nay sa
void stack_init(int *top)
{
    *top=0;
}
//show stack data
void displaydata(int stack[],int top)
{
    int i;
    printf("stack (%d) :",top);
    for(i=0;i<top;i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
//push function
int push(int stack[],int *top,int data){
    if(*top>=MAX)
    {
        return Push_fail;
    }
    else
    {
        stack[*top]=data; //top nayr hmr data ka sa p win lr p
        (*top)++;
        return Push_success;
    }
    
}
int pop(int stack[],int *top,int *data)
{
    if(*top>0)
    {   //to reduce data, they minus number each time with -1
        *data=stack[*top-1]; //careful
        (*top)--;
        return Pop_sucess;
    }
    else
    {
        return Pop_fail;
    }  
}
int main(){
    int stack[MAX];
    int top,i,data;
    stack_init(&top); //careful
    for(i=0;i<5;i++)
    {
        data=i;
        push(stack,&top,data);
        printf("push  %d\n",data);
    }
    peek(stack,&top,&data);
    displaydata(stack,top);
    for(i=0;i<5;i++)
    {
        
        pop(stack,&top,&data);
        printf("pop  %d\n",data);
    }

    peek(stack,&top,&data);
    displaydata(stack,top);
}
