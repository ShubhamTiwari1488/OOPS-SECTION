
#include<stdio.h>

struct student
{
 char name[50];
 int roll;
 int mark[3];
};

int Sum(struct student s)
{
 int sum=0;
 int i;
 
 for(i=0;i<3;i++)
 {
  sum+=s.mark[i];
 }
 
 return sum;
}

float avg(struct student s)
{
 int total;
 float avg;
 
 total=Sum(s);
 
 avg=total/3;
 
 return avg;
}

float Cgpa(struct student s)
{
  int total;
  float cgpa;
  
  total=Sum(s);
  cgpa=total/30;
  
  return cgpa;
}

int main()
{
 struct student s;
 
 int i,total;
 float average,cgpa;
 char ch;
 
 printf("\nEnter the roll ");
 scanf("%d",&s.roll);
 
 scanf("%c",&ch);
 printf("\nEnter name ");
 scanf("%[^\n]s",s.name);
 
 printf("\nEnter 3 marks ");
 for(i=0;i<3;i++)
 {
  scanf("%d",&s.mark[i]);
 }
 
 total=Sum(s);
 average=avg(s);
 cgpa=Cgpa(s);
 
 printf("\nSum is : %d",total);
 printf("\nAverage is : %.2f",average);
 printf("\nCGPA is : %.2f",cgpa);
 printf("\n");
 
 return 0;
}
 
  
     
