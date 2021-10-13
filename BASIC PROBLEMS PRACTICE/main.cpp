
// FIRST FILE : main.cpp

#include<iostream>

int count;

extern void write_extern();   //The defination of this function is in another file(support.cpp).

int main()
{
 count = 5;
 
 write_extern();
 
 return 0;
}

 
