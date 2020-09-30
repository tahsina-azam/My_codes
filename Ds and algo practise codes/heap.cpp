//implementation of min heap
#include<bits/stdc++.h>
using namspace std;

struct node
{
	int data;
	node *left;
	node *right;
};

class minheap
{
private:
	node *head,*tail;
public:
	minheap()
	{
		head=NULL;
		tail=NULL;
	}
	void insertKey(int n)
	{
		node *temp= new node;
		temp->data=n;
		temp->left=NULL;
		temp->right=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			node *dummy=new node;
			dummy=head;
			while(1)
			{
				if(dummy->left==NULL)
			{
				dummy->left=temp;
				break;
			}
			else if(dummy->right==NULL)
			{
				dummy->right=temp;
				break;
			}
			}
		}
	}
}

int main()
{

}