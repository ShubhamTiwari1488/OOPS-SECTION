
//SECOND FILE : support.cpp


#include<iostream>

extern int count;

void write_extern(void)
{
 std::cout<<"Count is : "<<count<<std::endl;
}

// The main part of this program is in another file (main.cpp). 
