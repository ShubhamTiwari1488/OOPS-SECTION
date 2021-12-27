
//DYNAMIC CONSTRUCTOR

#include<iostream>
using namespace std;

class Array
{
 private:
   int *arr;
   int n;
   
 public:
   Array()
   {
    n=0;
   }
   
   Array(int);
   
   void show_data();
};

Array::Array(int num)
{
 n=num;
 
 arr=new int[n];	//Memory allocated for array dynamically
 
 cout<<"\nEnter the elements ";
 
 for(int i=0;i<n;i++)
    cin>>arr[i];
    
}

void Array::show_data()
{
 for(int i=0;i<n;i++)
   cout<<" "<<arr[i];
   
 cout<<"\n";
}

int main()
{
 int size;
 
 cout<<"\nEnter the size of the array ";
 
 cin>>size;
 
 Array Arr(size);	//Calls Constructor and allocates memory 
 
 Arr.show_data();
 
 return 0;
}
  
    
