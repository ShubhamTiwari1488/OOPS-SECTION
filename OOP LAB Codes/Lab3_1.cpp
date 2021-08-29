

#include<iostream>
using namespace std;
int armstrong(int a)
{
    int i,j=0,s=0;
    i=a;
    while(i>0)
    {
        j=i%10;
        s=s+(j*j*j);
        i=i/10;
    }
    if(s==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,j;
    cout<<"\nArmstrong no. between 100 and 999 are: "<<endl;
    for(i=100;i<=999;i++)
    {
        j=armstrong(i);
        if(j==1)
        {
            cout<<i<<endl;
        }
    }
}
	
	
	

