
//THIS PROGRAM WILL GENERATE AN ERROR!!!!!


// NOTE := A CONSTRUCTOR THAT HAS ALL DEFAULT ARGUMENTS IS SIMILAR TO A DEFAULT(no - argument) CONSTRUCTOR

#include<iostream>
using namespace std;

class Student
{
 private:
  int roll_no;
  int marks;
  
 public:
  Student()	//Constructor 1
  {
   roll_no=0;
   marks=0;
  } 
  
  Student(int r=0,int m=0)	//Constructor 2
  {
   roll_no=r;
   marks=m;
  }
  
  void show_data()
  {
   cout<<"\nRoll no = "<<roll_no;
   cout<<"\tMarks = "<<marks<<endl;
  }
  
};

int main()
{
 Student S1;	//which constructor to call? ERROR
 
 S1.show_data();
 
 Student S2(03);
 S2.show_data();
 
 Student S3(03,98);
 S3.show_data();
 
 return 0;
}
 
