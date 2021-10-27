
// C++ program to show unary operator overloading

#include <iostream>
using namespace std;

class Distance 
{
  public:

	
	int feet, inch;

	
	Distance(int f, int i)
	{
		this->feet = f;
		this->inch = i;
	}

	
	void operator-()
	{
		feet--;
		inch--;
		cout << "\nFeet & Inches(Decrement): " << feet << " ' " << inch;
	}
	
	void operator+()
	{
	  	feet++;
	  	inch++;
	  	cout<<"\nFeet & Inches (Decrement) : "<<feet<<" ' "<<inch<<endl;
	}
	
};

int main()
{
	
	Distance d1(8, 9);

	-d1;
	+d1;
	
	cout<<endl;
	
	return 0;
}

