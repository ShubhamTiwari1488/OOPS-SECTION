
#include<stdio.h>

struct employee
{
 int eno;
 char ename[50];
 float esal;
};

int main()
{
 struct employee e;
 
 float da,hr,ta,gross;
 printf("\nEnter name ");
 scanf("%[^\n]s",e.ename);
 
 printf("\nEnter eno ");
 scanf("%d",&e.eno);
 
 printf("\nEnter salary ");
 scanf("%f",&e.esal);
 
 da=0.1*e.esal;
 hr=1.5*e.esal;
 ta=0.08*e.esal;
 
 gross=da+hr+ta+e.esal;
 
 printf("\nGross salary is : %.2f\n",gross);
 
 return 0;
}
  
