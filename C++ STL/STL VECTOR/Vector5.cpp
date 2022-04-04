//WAYS TO COPY A VECTOR IN C++

#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> vect1{1,2,3,4};
  
  vector<int> vect2=vect1; //Assignment '=' operator
  
  vector<int> vect3(vect1); //By passing vector as constructor
  
  vector<int> vect4;
  
  vect4.assign(vect1.begin(),vect1.end()); //By using inbuilt functions
  
  vector<int> vect5;
  
  for(int i=0;i<vect1.size();i++) //By iterations method
    vect5.push_back(vect1[i]);
  
  return 0;
}
