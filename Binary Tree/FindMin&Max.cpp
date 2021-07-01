/*
As we talked in earlier explaination, we can find the Min and Max node By diving to left or right side.
*/
int tree_min(Node *node){
	Node *current=node;          //create to looks simply data
	while(current->left!=NULL){  //As long as the left side data is not null, go to left
		current=current->left;
	}
	return (current->key);      //return the final result of current node data

}

int tree_max(Node *node){
	Node *current=node;          //create to looks simply data
	while(current->right!=NULL){  //As long as the left side data is not null, go to left
		current=current->right;
	}
	return (current->key);      //return the final result of current node data

}
