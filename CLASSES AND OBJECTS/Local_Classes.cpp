
//LOCAL CLASS

#include<iostream>
using namespace std;

int NUM;

int main()
{ 
 int val;
 
 class Sample
 {
  private:
   int a;
   
  public:
   
   void get_data()
   {
    cout<<"\nEnter the value of a : ";
    cin>>a;
    
    cout<<"\nEnter the value of global variable ";
    cin>>::NUM;
    
    //The below statement will generate error as Local Classes cannot use automatic variables
    // Also Local Classes cannot have static data members
    
    //Local Classes can use static variables declared inside the function.
    
    
    /*    
    cout<<"\nEnter the value of local variable ";
    cin>>val;
   */
    
   }
   
   void show_data()
   {
    cout<<"\nClass Private Data Member = "<<a;
    cout<<"\nGlobal Variable = "<<::NUM;
    //cout<<"\nLocal Variable = "<<val<<endl;	// Will generate error!!!!!
   }
   
 };
 
 Sample s;
 
 s.get_data();
 s.show_data();
 
 return 0;
}
    
