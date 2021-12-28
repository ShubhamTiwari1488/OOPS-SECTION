
//MULTIPLE CONSTRUCTORS IN A PROGRAM

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
 int age;
 char first_name[10];
 char middle_name[10];
 char last_name[10];
 
 public:
  Person()	//Constructor 1 - default constructor
  {
   age=-1;
   strcpy(first_name,"\0");
   strcpy(middle_name,"\0");
   strcpy(last_name,"\0");
  }
  
  Person(int a)	//Constructor 2 - constructor with one argument
  {
   age=a;
   strcpy(first_name,"\0");
   strcpy(middle_name,"\0");
   strcpy(last_name,"\0");
  }
  
  Person(int a,char* fn)	//Constructor 3 - constructor with two arguments
  {
   age=a;
   strcpy(first_name,fn);
   strcpy(middle_name,"\0");
   strcpy(last_name,"\0");
  }
  
  Person(int a,char *fn,char mn[])	//Constructor 4 - constructor with three arguments
  {
   age=a;
   strcpy(first_name,fn);
   strcpy(middle_name,mn);
   strcpy(last_name,"\0");
  }
  
  Person(int a,char *fn,char mn[],char *ln)	//Constructor 5 - constructor with four arguments
  {
   age=a;
   strcpy(first_name,fn);
   strcpy(middle_name,mn);
   strcpy(last_name,ln);
  }
  
  void show_data()
  {
   cout<<"\nName : "<<first_name<<" "<<middle_name<<" "<<last_name;
   cout<<"\t\t AGE : "<<age<<endl;
  }
  
};

int main()
{
 Person P1;	//Constructor 1 called
 P1.show_data();
 
 Person P2(18);	//Constructor 2 called
 P2.show_data();      
 
 Person P3(21,"Goransh");	//Constructor 3 called
 P3.show_data();
 
 Person P4(25,"Aditi","Raj");	//Constructor 4 called
 P4.show_data();
 
 Person P5(32,"Piyush","Kumar","Tiwari");	//Constructor 5 called
 P5.show_data();
 
 return 0;
}
 
 
