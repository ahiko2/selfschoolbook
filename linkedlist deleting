This deleting function is only available when in used to delete head note.
for example,
100,200,300,400,500
delete_node(del)
200,300,400,500
delete_node(del)
300,400,500
delete_node(del)
400,500
///////

And this is when head is global valuable.
void del_node(int data){
    Node *temp=new Node();
    temp=head;
    if(data!=0)
    {
        data=head->data;
        head=head->next;
        free(temp);
    }
    
    
  ___________
  copy from internet
  ___________
  void remove(int val)
    {
      // If the value to be deleted is at head
      if (head->data == val)
      {
        delete head;
        head = head->next;
        return;
      }

      // If there is only one element in the list
      if (head->next == NULL)
      {
        // If the head is to be deleted. Assign null to the head
        if (head->data == val)
        {
          delete head;
          head = NULL;
          return;
        }
        // else print, value not found
        cout << "Value not found!" << endl;
        return;
      }

      // Else loop over the list and search for the node to delete
      Node* temp = head;
      while(temp->next!= NULL)
      {
        // When node is found, delete the node and modify the pointers
        if (temp->next->data == val)
        {
          Node* temp_ptr = temp->next->next;
          delete temp->next;
          temp->next = temp_ptr;
          return;
        }
        temp = temp->next;
      }

      // Else, the value was neve in the list
      cout << "Value not found" << endl;
    }
