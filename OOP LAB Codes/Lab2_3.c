
//WAP TO ALLOCATE MEMORY FOR 5 NO AND FIND GREATEST NUMBER.

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *a,*b,*c,*d,*e;
 
 int max;
 
 a=(int *)calloc(1,sizeof(int));
 b=(int *)calloc(1,sizeof(int));
 c=(int *)calloc(1,sizeof(int));
 d=(int *)calloc(1,sizeof(int));
 e=(int *)calloc(1,sizeof(int));
 
 printf("\nEnter value of 5 no's\n");
 scanf("%d %d %d %d %d",a,b,c,d,e);
 
 printf("\nThe 5 values you entered are : %d , %d , %d ,%d , %d\n",*a,*b,*c,*d,*e);
 
 if(*a>*b && *a>*c && *a>*d && *a>*e)
   max=*a;
 
 else if(*b>*a && *b>*c && *b>*d && *b>*e)
   max=*b;

 else if(*c>*a && *c>*b && *c>*d && *c>*e)
   max=*c;

 else if(*d>*a && *d>*b && *d>*c && *d>*e)
   max=*d;

 else if(*e>*a && *e>*c && *e>*b && *e>*d)
   max=*e;
   
   
 printf("\nThe maximum no is : %d\n",max);  

 return 0;
}
 
