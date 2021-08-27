
// WAP TO CREATE AN DYNAMIC ARRAY AND DISPLAY ELEMENTS

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int **arr;
 int row,col,i,j;
 
 printf("\nEnter the no of rows and columns respectively\n\n");
 scanf("%d %d",&row,&col);
 
 arr=(int **)malloc(row*sizeof(int *));
 
 if(!arr)
 {
  printf("\nMemory not allocated\n");
  exit(0);
 }
 
 for(i=0;i<row;i++)
   arr[i]=(int *)malloc(col*sizeof(int));
   
 if(!arr)
 {
  printf("\nMemory not allocated\n");
  exit(0);
 }
 
 for(i=0;i<row;i++)
   for(j=0;j<col;j++)
   {
    printf("\nEnter element of row %d and col %d : ",(i+1),(j+1));
    scanf("%d",*(arr+i)+j);
   }
   
 printf("The array you entered is : \n");
 
 for(i=0;i<row;i++){
   for(j=0;j<col;j++)
   {
    printf("%d\t",*(*(arr+i)+j));
   }
   printf("\n");
 }
 
 return 0;
 
}
   
       
