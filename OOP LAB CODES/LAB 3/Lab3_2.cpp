

#include<iostream>
using namespace std;

float calculateInterest(float p, float t, float r)
{
    return (p*t*r)/100;
}

int main()
{

  float p, t, r, interest;

 
  cout << "\nEnter principal amount, time and rate:";
  cin >> p >> t >> r;

  interest = calculateInterest(p, t, r);

  cout << "Interest = " << interest << endl;

  return 0;
}

