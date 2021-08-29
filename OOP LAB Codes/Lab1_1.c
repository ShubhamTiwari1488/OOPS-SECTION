
#include<stdio.h>

struct student
{
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
  cgpa=total/3;
  
  return cgpa;
}

int main()
{
 struct student s;
 
 int i,total;
 float average,cgpa;
 
 printf("\nEnter the roll ");
 scanf("%d",&s.roll);
 
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
 
  
     
