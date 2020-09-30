#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

class linkedlist
{
private:
	node *head,*tail;
public:
	linkedlist()
	{
     head=NULL;
     tail=NULL;
	}
	
	void addNode(int n)
	{
		node *temp=new node;
		temp->data=n;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	}
	void deleteNode(int n)
	{
	  node *temp=new node;
	  temp=head;
      for(int i=0;i<n-1;i++)
      {
      	temp=temp->next;
      }
     if(temp==head)
     {
     	head=head->next;
     }
     else if(temp==tail)
     {
     	node *tmpo=new node;
     	tmpo=head;
     	for(int i=0;i<n-2;i++)
     	{
     		tmpo=tmpo->next;
     	}
     	tail=tmpo;
     	tail->next=NULL;
     }
     else
     {
     	node *tmpo=new node;
     	tmpo=head;
     	for(int i=0;i<n-2;i++)
     	{
     		tmpo=tmpo->next;
     	}
     	tmpo->next=temp->next;
     }
	}
	void displayNode()
	{
		node *temp=new node;
		temp=head;
		cout<<"these are the elements of the linkedlist:"<<endl;
		while(temp->next!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		cout<<temp->data<<endl;
	}
	
};

int main()
{
	linkedlist a;
	
	a.addNode(2);//add node with value
	a.addNode(6);
	a.addNode(7);
	a.addNode(9);
	a.deleteNode(4);//insert which numer node you want to delete
	a.displayNode();
	return 0;
}