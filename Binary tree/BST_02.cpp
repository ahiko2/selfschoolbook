#include <iostream>
#include <cstdlib>

//declare tree struct

struct Node{
	int data;
	Node *left;
	Node *right;
};
// In TDS, there are 3 ways of storing datas each of them has 3 steps.

//1 is transverse preorder 
/*
1. left node
2. goes left
3. goes right
*/
void preorder(Node *head){
	if(head!=NULL){
		std::cout<<head->data;
		preorder(head->left);
		preorder(head->right);
	}
}
//2 is inorder traversal
/*

1. goes left
2. left node
3. goes right
*/
void inorder(Node *head){
	if(head!=NULL){
		inorder(head->left);
		std::cout<<head->data;
		inorder(head->right);
	}
}
//3 is postorder traversal
/*
1. goes right
2. goes left
3. left node

*/
void postorder(Node *head){
	if(head!=NULL){
		postorder(head->left);
		postorder(head->right);
		std::cout<<head->data;
	}
}
/*
Insert data is 40,30,70,10,60,90,20
Preorder: 40 30 10 20 70 60 90 
Inorder:  10 20 30 40 60 70 90 
Postorder:20 10 30 60 90 70 40 

In here, you might realise that inorder print result is same as number in order
*/
