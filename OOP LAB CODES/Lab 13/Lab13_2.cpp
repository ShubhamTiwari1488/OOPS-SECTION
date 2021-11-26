

#include<iostream>
using namespace std;
class Item
{
	public:
		int num,p;
		double price;
			void getDetails(){
				cout<<"\nEnter the number of the items: ";
				cin>>num;
				cout<<"\nEnter the price of the item: ";
				cin>>p;
				price=num*p;
			}
			void Display(){
				cout<<"\nThe price of the item is: "<<price<<endl;
			}
};
int main()
{
	Item m[5],*ptr;
	
	ptr=m;
	
	cout<<"\nTaking 5 inputs\n\n";
	
	for(int i=0;i<5;i++)
	{
	 (ptr+i)->getDetails();
	}
	
	cout<<"\n\nDisplaying the details ::::\n";
	 
	for(int i=0;i<5;i++)
	{ 
	  (ptr+i)->Display();
	}  
	return 0;
	
}

