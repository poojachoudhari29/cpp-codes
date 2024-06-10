#include<iostream>
#include<stdlib.h>
using namespace std;

class stack
{
	private:
	int *stack_array=NULL;
	int top,size;
	
	public:
		stack(int x)
		{
			size=x;
			stack_array = (int *)calloc(sizeof(int),size);
			top=-1;
		}
		int isFull()
		{
			if(top==size-1)
			{
				return 0;
			}
			return 1;
		}
		int push(int data)
		{
			if(isFull()==1)
			{
				top++;
				stack_array[top]=data;
				return 0;
			}
			cout<<"\nstack is full";
			return 1;
		}
		int pop()
		{
			if(top>=0)
			{
				top--;
				return 0;
			}
			cout<<"\nStack is empty";
			return 1;
		}
		void display()
		{
			if(top>-1)
			{
				for(int i=0;i<=top;i++)
				{
					cout<<stack_array[i]<<" ";		
				}
			}
		}		
};
int main()
{	
	stack S1(10);
	int data ,choice;
	while(1)
	{
		cout<<"\nEnter the choice:"<<endl;
		cout<<"\n0.push\n1.pop\n2.display\n";
		cin>>choice;
		if(choice==0)
		{
			cout<<"\nenter the data to enter in stack:";
			cin>>data;
			S1.push(data);
			S1.display();
			
		}
		else if(choice==1)
		{
			S1.pop();
			S1.display();
			
		}
		else if(choice==2)
		{
			S1.display();
			break;
		}
	}
}