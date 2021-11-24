
#include<iostream>
using namespace std;


template<class T1, class T2>
class Test
{
		T1 a;
		T2 b;
	public:
		Test(T1 x, T2 y)
		{
			a = x;
			b = y;
		}
		
		
		void show()
		{
			cout<<"\nSum of the two numbers is = "<<a+b<<endl;
		}
};


int main()
{
	
	Test <float, int> test1 (11.23, 32);
	
	test1.show();
	
	return 0;
}

