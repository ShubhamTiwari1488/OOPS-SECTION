

#include<iostream>
#include<cstring>
using namespace std;

class person
{
	public:
   long int mob; 
   char name[10];
   
   void acc() // function overloading 
   {
      cout<<"\nEnter person name : ";
      cin>>name;
      cout<<"\nEnter person mob no : ";
      cin>>mob;

   }
   void acc(char nme[]) // function overloading 
   {
   	if(strcmp(nme,name)==0)
      {
      cout<<"\nperson name   : "<<name;
      cout<<"\nperson mob no : "<<mob<<endl;
      }
   }
   void acc(long int mno)  // function overloading 
   {
   	if(mno==mob)
      {
      cout<<"\nperson name   : "<<name;
      cout<<"\nperson mob no : "<<mob<<endl;
      }
   }
   void dis()
   {
      cout<<"\nperson details"<<endl;
     
      cout<<"\nperson name   : "<<name;
    
      cout<<"\nperson mob no : "<<mob<<endl;
   }

};

int main()
{
   char nme[10];
   int i,no,ch;// no=total person no , ch=choice
   long int mno;//mno=mobile no 
   
   do{
   cout<<"\n1.Accept person details\n2.Display person details\n3.ii.	To search the mobile number of a given person\n4.To search the Person details of a given mobile number\n5.Exit\nEnter your choice :- ";
   cin>>ch;
   switch(ch)
   {
   case 1:cout<<"Enter how many Person Details you want to enter: ";
   		 cin>>no;
          person p[20];
          for(i=0;i<no;i++)
   		{
	 			p[i].acc();
   		}break;
   case 2:for(i=0;i<no;i++)
   		 p[i].dis();
          break;
   case 3:cout<<"\nEnter person name search for mob no : ";
   		 cin>>nme;
          for(i=0;i<no;i++)
  			 p[i].acc(nme);
          break;
   case 4:cout<<"\nEnter mob no search for person name : ";
  			 cin>>mno;
  			 for(i=0;i<no;i++)
  			 p[i].acc(mno);
          break;
   }
   }while(ch!=5);
   
   return 0;
}
