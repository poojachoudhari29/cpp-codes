#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *next;
	
	node *insert_first(int data1)
	{
		node *head=new node;
		head->data=data1;
		head->next=NULL;
		return head;
	}
	
	void insert_at_end(int data2,class node *head)
	{
		node *p=new node;
		node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		p->data=data2;
		p->next=NULL;
		temp->next=p;
	}
	
	node *insert_at_first(int data1,class node *head)
	{
		node *p=new node;
		node *q=head;
		p->data=data1;
		p->next=q;
		return p;
	}
	
	node *delete_at_end(node *head)
	{
		node *p=head->next;
		node *q=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		q->next=NULL;
		delete p;
	}
	
	node *delete_at_first(node *head)
	{
		node *p=head->next;
		node *q=head;
		delete q;
		return p;		
	}
	
	void print(class node *head)
	{
		class node *p=head;
		cout<<"\nthe list is:"<<endl;
		while(p)
		{
			cout<<p->data;
			cout<<" ";
			p=p->next;
		}
	}
};


int main()
{
	int element,choice;
	node n;
	node *head;
	
	cout<<"\n enter element to insert:";
	cin>>element;
	head=n.insert_first(element);
	n.print(head);
	while(1)
	{
	cout<<"\nChoose:\n1.insert element at first\n2.insert element at last\n3.delete element at first\n4.delete element at last\n5.print list \n";
	cin>>choice;
		if(choice==1)
		{
	
			cout<<"Enter element to insert at first of list:";
			cin>>element;
			head=n.insert_at_first(element,head);
			n.print(head);
		}
		else if(choice==2)
		{
			cout<<"\nEnter element to insert at last of list:";
			cin>>element;
			n.insert_at_end(element,head);
			n.print(head);
		}
		else if(choice==3)
		{
			head=n.delete_at_first(head);
			n.print(head);
		}
		else if(choice==4)
		{
			head=n.delete_at_end(head);
			n.print(head);
		}

	}
	return 0;
}