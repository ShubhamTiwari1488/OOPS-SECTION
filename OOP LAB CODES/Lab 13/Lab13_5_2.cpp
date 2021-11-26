
#include <iostream>
using namespace std;

class ABC
{
public:
	virtual void display()
	{
		cout << "print base class" << endl;
	}
	
};

class KBC : public ABC 
{
public:
	void display()
	{
		cout << "print 1st derived class" << endl;
	}
	
};

class BBC :public ABC
{
 public:
 	void display()
 	{
 	 cout<<"print 2nd derived class "<<endl;
 	}
 	
 	
};
   
int main()
{
	ABC* bptr;
	KBC d;
	BBC b;
	bptr = &d;
	
	bptr->display();
	
	bptr=&b;
	
	bptr->display();
	
	return 0;
	
}
