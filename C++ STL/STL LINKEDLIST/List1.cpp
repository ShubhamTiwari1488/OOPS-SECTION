#include<iostream>
#include<iterator>
#include<list>
using namespace std;

void showlist(list<int> g)
{
 list<int>::iterator it;
 
 for(it=g.begin();it!=g.end();it++)
 {
  cout<<*it<<" ";
 }
 
 cout<<endl;
}

int main()
{
 list<int> ll1,ll2;
 
 for(int i=0;i<10;i++)
 {
  ll1.push_back(i*2); //Pushing at back
  
  ll2.push_front(i*3); //Pushing at front
 }
 
 
 cout<<"\nList 1 is : ";
 
 showlist(ll1);
 
 cout<<"\nList 2 is : ";
 
 showlist(ll2);
 
 return 0;
} 
  
