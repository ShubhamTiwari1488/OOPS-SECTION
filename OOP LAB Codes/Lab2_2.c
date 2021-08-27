
//WAP TO ALLOCATE MEMORY FOR 5 NO AND DISPLAY IT BY USING MALLOC.

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *a,*b,*c,*d,*e;
 
 a=(int *)malloc(sizeof(int));
 b=(int *)malloc(sizeof(int));
 c=(int *)malloc(sizeof(int));
 d=(int *)malloc(sizeof(int));
 e=(int *)malloc(sizeof(int));
 
 printf("\nEnter value of 5 no's\n");
 scanf("%d %d %d %d %d",a,b,c,d,e);
 
 printf("\nThe 5 values you entered are : %d , %d , %d ,%d , %d\n",*a,*b,*c,*d,*e);
 
 return 0;
}
 
