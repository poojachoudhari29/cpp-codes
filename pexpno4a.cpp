#include<bits/c++.h>
using namespace std;

class product
{
	int id;
	char name[20];
	int price;
	int gst;
	
	public:
		void setData();
		void display(int);
		int search(char);
		
};

void product::setData()
{
	cout<<"\nEnter the id,name,price,gst";
	cin>>id>>name>>price>>gst;
	
}

void product::display(int j)
{
	cout<<j<<right<<setw(15)<<id<<setw(25)<<name<<setw(15)<<price<<setw(15)<<gst<<endl;
}

int product::search(char name1[])
{
	if(strcmp(name,name1)) return 0
	return 1;	
}

int main()
{
	product p[100];
	int i=0,r,s,c,cnt=0,ch=4;
	char name1[20];
	switch(ch)
	{
		cout<<"\n0.Exit\n1.insert\n2.delete\n3.search\n4.display\n";
		cout<<"\nEnter choise:";
		
		case 0:
			cout<<"\nExited";
		case 1:
			p[cnt].setData();
			cnt++;
			break;
		case 2:
			cout<<"\nEnter the sr no. to delete product:";
			cin>>r;
			if(r>cnt){
			cout<<"\ninvalide sr no. entered";
			break;
			}
			for(j=r-1;j<cnt;j++) p[j]=p[j+1];
			cout<<"\nproduct deleted successfully";
			cnt--;
			break;
		case 3:
				cout<<"\nrnter the name of product:";
				cin>>name1;
				for(int i=0;i<cnt;i++)
				{
					p[i].search(int j+1);
				}
						
	}
	
}