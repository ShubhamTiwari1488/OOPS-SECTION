
//WAP TO DELETE A SUBSTRING FROM A TEXT

#include<iostream>
using namespace std;

int main()
{
 char main[100],sub[100],str[100];
 
 int i=0,j=0,k=0,pos,flag;
 
 cout<<"\nEnter the string ";
 cin.getline(main,100);
 
 cin.ignore();
 
 cout<<"\nEnter the substring to be deleted ";
 cin.getline(sub,100);
 
 cin.ignore();
 
 while(main[i]!='\0')
 {
  pos=k=i;
  flag=1;
  
  while(sub[j]!='\0')
  {
   if(main[k]!=sub[j])
   {
    flag=0;
    j=0;
    break;
   }
   
   else
   {
    j++;
    k++;
   } 
  }
  
  i++;
  
  if(flag==1)
  {
   break;
  }
 }  
 
 cout<<"\nThe substring starts from position "<<pos<<endl;
 
 i=0;
 j=0;
 k=0;
     
 while(main[i]!='\0' && flag==1)
 {
  if(i<pos)
  {
   str[k]=main[i];
   k++;
   i++;
  }
   
  else if(i>=pos && main[i]==sub[j])
  {
   i++;
   j++;
   
   continue;
  }
  
  else
  {
   str[k]=main[i];
   i++;
   k++;
  } 
 }
 
 cout<<"\nThe New String will become : "<<str<<endl;
 
 return 0;
}
  
  
    
