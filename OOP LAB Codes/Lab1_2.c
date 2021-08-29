
#include<stdio.h>
#include<string.h>

struct student
{
 int roll;
 char name[50];
 int marks;
};

int main()
{
 struct student s[5];
 
 int i,j,temp;
 char copy[50];
 char ch;
 
 for(i=0;i<5;i++)
 {
  printf("\nEnter roll no : ");
  scanf("%d",&s[i].roll);
  scanf("%c",&ch);
  printf("\nEnter name ");
  scanf("%[^\n]s",s[i].name);
  printf("\nEnter marks ");
  scanf("%d",&s[i].marks);
  printf("\n");
 }
 
 for(i=0;i<5;i++)
   for(j=i+1;j<5;j++)
   {
    if(s[i].marks<s[j].marks)
    {
     temp=s[i].marks;
     s[i].marks=s[j].marks;
     s[j].marks=temp;
     
     temp=s[i].roll;
     s[i].roll=s[j].roll;
     s[j].roll=temp;
     
     strcpy(copy,s[i].name);
     strcpy(s[i].name,s[j].name);
     strcpy(s[j].name,copy);
     
    }
   }
   
 /*_printf("\nDisplaying the data\n");
 
 for(i=0;i<5;i++)
 {
  printf("\nName : %s",s[i].name);
  printf("\nRoll : %d",s[i].roll);
  printf("\nMarks : %d",s[i].marks);
  printf("\n");
 }_*/
 
 printf("\nDisplaying the data for third highest mark\n");
 
 printf("\nName is : %s",s[2].name);
 printf("\nRoll no is : %d",s[2].roll);
 printf("\nMarks is : %d",s[2].marks);
 
 printf("\n");
 
 return 0;
}
      
