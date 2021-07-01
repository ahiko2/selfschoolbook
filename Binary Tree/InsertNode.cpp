/*From now, we will look how to insert nodes 1 after another.
First step, we are going to create (new node) form because in the case where node cannot be detected.

*/
Node *GetNewNode(int data){
    Node *Newnode=new Node;
    newNode->key   = data;
    newNode->left  = NULL;
    newNode->right = NULL;

    return Newnode;
}
//like this, we created new node which left and right leaf are pointing to NULL.
//From now, create insert form. This insert method will automatically place the node.

Node *insert(struct Node *root, int val)
{
   
    if(root == NULL)
        return getNewNode(val);   //Create newnode if old didn’t find
    
    if(root->key < val)          //if current node val is greater than root node(val), go to right
        root->right = insert(root->right,val);
    
    else if(root->key > val)     //if current node val is less than root node(val), go to left
        root->left = insert(root->left,val);
  //By means, we understand that the minimum node is stored at the most left and maximum val`s node stored at right side.
   
    return root;  //And here, return the node
}

