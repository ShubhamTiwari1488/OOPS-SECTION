

//WAP TO CREATE EMP STRUCTURE HAVING EMPNO,ENAME ,ESAL.USE INPUT() TO TAKE INPUT AND DISPLAY FUNCTION TO DISPLAY IT.

#include<stdio.h>

       struct Employee
       {
              int Id;
              char Name[50];
              long Salary;
       };

       struct Employee Input();            //Statement   1
       void Display(struct Employee);
       
       int main()
       {
              struct Employee Emp;

              Emp = Input();

              Display(Emp);
              
              printf("\n");
              
              return 0;
       }

       struct Employee Input()
       {
              struct Employee E;
              char ch;
              
                    printf("\nEnter Employee Id : ");
                    scanf("%d",&E.Id);
                    
                    scanf("%c",&ch);
                    
                    printf("\nEnter Employee Name : ");
                    scanf("%[^\n]s",E.Name);


                    printf("\nEnter Employee Salary : ");
                    scanf("%ld",&E.Salary);

              return E;             //Statement   2
       }
       
       
        void Display(struct Employee E)
       {
                    printf("\n\nEmployee Id : %d",E.Id);
                    printf("\nEmployee Name : %s",E.Name);
                    printf("\nEmployee Salary : %ld",E.Salary);
       }
       
       
