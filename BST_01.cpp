/*
1. introduction
From now, We will be learning about Tree Data Strcture.
Tree Data Strcture is like a tree which is root and leaf.
Unlike, the real tree, its goes downside. So, we start is, struct
struct Node{
	int data; 			//in here, data will be store
	Node *left;			//left and right means, in decide where they
	Node *right;		//will be storing.
};
*/
#include <iostream>
#include <cstdlib>

struct Node{
	int data;
	Node *left;
	Node *right;
};
//Show the result in the form of Tree
void treedisplay(Node *head,int lvl){
	if(head!=NULL){
		treedisplay(head->right,lvl+1);
		std::cout<<"\n";
		for(int i=0;i<lvl;i++){
			std::cout<<" _ ";

		}
		std::cout<<head->data;
		treedisplay(head->left,lvl+1);
	}
}
