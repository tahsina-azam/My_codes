dequeue
 {
    	struct node *to_delete;
    	if(head==NULL)
    	return;
    else
    	{
    		to_delete=head;
    		head=head->next;
    		free(to_delete);
    		cout<<"Successfully removed the first node from the list."<<endl;
		}
	}
	
	
	
	printlist
	 {
    	struct node *current_node;
    	current_node = head;
    	while(current_node!=NULL)
    	{
    		cout<<current_node->val<<endl;
    		current_node=current_node->next;
		}
    	
	}
	
	
	insert after head
	 {
    	node *current=new node;
    	current->val=x;
    	if(head==NULL)
    	{
    		head->val=current->val;
    		head->next=NULL;
    		tail=head;
    		return ;
		}
		if(head==tail)
		{
		head=current->val;
		head->next=NULL;
		return ;
		}
		current->next=head->next;
		head->next=current->val;
		return ;
	}
	
	
	
	insert before tail
	 {
    node *cur= new node;
    cur->val=x;
    if(head==NULL)
    {
    head->val=cur->val;
	head->next=NULL;
	tail=head;	
	return ;
	}
	if(head==tail)
	{
	cur->next=head->val;
	head->val=cur->val;
	head->next=cur->next;
	return ;	
	}
		node *temp=new node;
		temp=head;
		while(temp->next!=tail->val)
		{
			temp=temp->next;
		}
		cur->next=temp->next;
		temp->next=cur->val;
		
	}
	
	
	
