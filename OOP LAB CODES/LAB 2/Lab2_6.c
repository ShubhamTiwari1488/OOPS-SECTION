

//WAP TO CREATE STUDENT STRUCTURE HAVING ROLL ,NAME,MARK1,MARK2,MARK3 AND DISPLAY SUM(),AVG(),USING POINTER TO STRUCTURE
//IN C


#include<stdio.h>

struct student
{
 int roll;
 char name[50];
 float mark1;
 float mark2;
 float mark3;
};

int main()
{
 struct student s[3],*ptr;
 
 int i;
 float sum,avg;
 char ch;
 
 ptr=s;
 
 for(i=0;i<2;i++)
 {
  printf("\nEnter name ");
  scanf("%[^\n]s",(ptr+i)->name);
  
  printf("\nEnter roll ");
  scanf("%d",&(ptr+i)->roll);
  
  printf("\nEnter mark1 ");
  scanf("%f",&(ptr+i)->mark1);
  
  printf("\nEnter mark2 ");
  scanf("%f",&(ptr+i)->mark2);
  
  printf("\nEnter mark3 ");
  scanf("%f",&(ptr+i)->mark3);
  
  scanf("%c",&ch);
 }
 
 printf("\n=============================\n");
 
 for(i=0;i<2;i++)
 {
  printf("\nRoll no is :: %d",(ptr+i)->roll);
  
  printf("\nName is :: %s",(ptr+i)->name);
  
  sum=(ptr+i)->mark1+(ptr+i)->mark2+(ptr+i)->mark3;
  
  avg=sum/3;
  
  printf("\nSum is :: %.2f and average is :: %.2f\n",sum,avg);
 } 
 
 return 0;
}
 
