
//DEMONSTRATING THE USE OF STOI IN C++ (STOI CONVERTS STRING TO INTEGER . AND IF UNABLE TO DO SO THROW AN EXCEPTION


#include <iostream>
using namespace std;

int main() {
  
  string num1;
  string num2;
  cout << "Type the first whole number and then press Enter or Return: ";
  cin >> num1;
  cout << "Type the second whole number and then press Enter or Return: ";
  cin >>num2;
  
  

  int sum = stoi(num1) + stoi(num2);
  cout << ( num1 + " + " + num2 + " = " + to_string(sum) ) << endl;

  
  
  return 0;
  
}

