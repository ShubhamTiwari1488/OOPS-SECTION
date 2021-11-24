
#include <iostream>
using namespace std;

template <class T>
class Stack
{
        public:
                Stack();
                void push(T i);
                void display();
        private:
                int top;
                T st[100];
};

template <class T>
Stack<T>::Stack()
{
  top = -1;
}

template <class T>
void Stack<T>::push(T i)
{
   st[++top] = i;
}

template <class T>
void Stack<T>::display()
{
  for(int i=top;i>=0;i--)
     cout<<st[i]<<" ";
}

int main ()
{
    Stack<int> stack;
   
    stack.push(67);
    stack.push(98);
    stack.push(11);
    stack.push(23);
    
    cout<<"\nDisplaying the stack ";
    stack.display();
    
    cout<<"\n\n";
    
    return 0;
}
