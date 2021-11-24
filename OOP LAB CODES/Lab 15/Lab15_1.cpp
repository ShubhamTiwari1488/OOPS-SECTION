
#include<iostream>
using namespace std;

template <class T>

void Swap(T &x, T &y) 
{

    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main() 
{

    int x, y;

    cout << "\nEnter two numbers:";
    cin >> x>>y;

    cout << "Before Swap:";

    cout << "\nx value is:" << x;
    cout << "\ny value is:" << y;

    Swap(x, y);

    cout << "\n\nAfter Function Templates:\n";

    cout << "\nx value is:" << x;
    cout << "\ny value is:" << y;
    cout<<"\n";
    
    return 0;
}
