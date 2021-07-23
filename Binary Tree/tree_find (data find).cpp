Node *tree_find(Node *node,int data){
	if(node==NULL){
		return NULL;
	}

	else if(data < (node->data)){
		return tree_find((node->left),data);
	}
	else if(data > (node->data)){
		return tree_find((node->right),data);
	}
	
	return node;
}

//explanation
/*
As we go far, we do know the bigger number(value) is go to right side and lower to left (side).
So, Let’s think about it. Let’s say Search_key = 80

       40
     /    \
    30     70
   /       /  \
10       60   90
  \           / \
  20        80  85
 
First, 80 to compare to 40, since 40 < 80, Search_key goes to right.
Second, 70 < 80 => go to right
Thirc, 90 > 80 => go to left
Then found!

And in also main part, we also need to prepare new node. Because the tree_find function itself is Node. 
Then, We will declare new node called Search_node, 
  Search_node=tree_find(root,data);
  
*/
