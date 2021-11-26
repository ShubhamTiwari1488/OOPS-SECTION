
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
	Item m,*ptr,n;
	
	ptr=&n;
	
	m.getDetails();
	m.Display();
	
	cout<<endl;
	
	(*ptr).getDetails();
	(*ptr).Display();
	
	return 0;
	
}

