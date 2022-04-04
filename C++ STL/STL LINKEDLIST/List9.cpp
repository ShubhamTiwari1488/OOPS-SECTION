//list::remove() in C++ STL

#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> mylist{ 1, 2, 2, 2, 5, 6, 7 };
  
	mylist.remove(2);   //Remove all elements with value '2'
	
  for (auto it = mylist.begin(); it != mylist.end(); ++it)
		cout << ' ' << *it;
}
