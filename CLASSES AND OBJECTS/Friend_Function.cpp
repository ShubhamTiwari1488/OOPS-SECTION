
//DEMONSTRATING FRIEND FUNCTION

#include<iostream>
using namespace std;

class Distance 
{
 int meters;
 int kms;
 
 friend float convert_meters(Distance &d);     // Friend Function can be declared in private or public
 
 public:
 
  void get_data()
  {
   cout<<"\nEnter kms and meters ";
   cin>>kms>>meters;
   
  }
  
};

float convert_meters(Distance &d)
{
 return ((d.kms*1000)+d.meters);
}

int main()
{
 Distance d;
 
 d.get_data();
 
 cout<<"\nDistance in meters = "<<convert_meters(d)<<endl;
 
 return 0;
}
     
