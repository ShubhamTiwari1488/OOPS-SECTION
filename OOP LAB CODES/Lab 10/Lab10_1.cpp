#include <iostream>
using namespace std;

class Number 
{
   public:
      void setNumber(int w) 
      {
         Number = w;
      }
      
      
   protected:
      int Number;
};

class Strong: public Number 
{
   public:
      void getStrong() 
      { 
         int w,sum=0;
        cout<<"Enter number to check for strong: ";
        cin>>w;
        int save=w;
        
        while(w)
        {
            int num=w%10;
            int fact = 1;
            for(int i=num;i>0;i--)
            {
                fact=fact*i;
            }
            sum+=fact;
            w/=10;
        }
        
        if(sum==save)
        {
            cout<<save<<" is a Strong Number";
        }
        else
        {
            cout<<save<<" is not a Strong Number";
        } 
      }
};
class Perfect: public Number {
   public:
      void getPerfect() { 
         	int w, i, sum = 0;
	
	cout << "\nPlease Enter the Number to check for Perfect: ";
	cin >> w;
	
	for(i = 1 ; i < w ; i++)
	{
		if(w % i == 0)
		{
			sum = sum + i;
		}
	}
			
	if(w == sum)
	{
		cout << w << " is a Perfect Number";
	}
	else
	{
		cout << w << " is Not a Perfect Number";
	}
      }
};


int main(void) {
   int w;
   Strong s;
   s.getStrong();
   Perfect p;
   p.getPerfect();

   cout<<endl;
   
   return 0;
}
