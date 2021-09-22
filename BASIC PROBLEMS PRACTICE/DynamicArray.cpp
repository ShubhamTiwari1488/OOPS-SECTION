
//DYNMAINC ARRAY QUESTION

#include<iostream>
//#include<cstdlib>
using namespace std;

int main()
{
 
 int a[10];
 int e,o;
 
 e=o=0;
 
 cout<<"\nEnter the elements of the array\n"<<endl;
 
 for(int i=0;i<10;i++)
 {
  cout<<"\nEnter element "<<i+1<<" ";
  cin>>a[i];
  
  if(a[i]%2==0)
  {
   e++;
  }
  
  else
    o++; 
 }
 
 int *ep=new(nothrow) int[e]; //nothrow will ensure that NULL is returned in case memory is not allocated
 
 int *op=new(nothrow) int[o];
 
 if(!ep && !op)
 {
  cout<<"\nMemory not allocated "<<endl;
  //exit(0);
 }
 
  
 int j,k;
 
 j=k=0;
 
 for(int i=0;i<10;i++)
 {
  if(a[i]%2==0)
  {
   *(ep+j)=a[i];
   j++;
  }
  
  else
  {
   *(op+k)=a[i];
   k++;
  }
 }
 
 cout<<"\nDisplaying even numbers :\t";
 for(int i=0;i<e;i++)
  cout<<ep[i]<<" ";
 
 cout<<"\nDisplaying odd numbers :\t"; 
 for(int i=0;i<o;i++)
  cout<<op[i]<<" ";
 
 cout<<endl;
 
 //Deleting the block of memory  
 delete[] ep;
 delete []op;
 
 return 0;
}      
 
  
