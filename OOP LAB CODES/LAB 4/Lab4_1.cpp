
#include <iostream>
using namespace std;
 
#define MAX 3
 
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
    public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
};
 
//member function definition, outside of the class
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
}
 
//member function definition, outside of the class
void student::putDetails(void){
    cout << "Student details:\n\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total ;
}
 
int main()
{
    student std[MAX];       //array of objects creation
    int n,i;
     
    cout <<"Enter total number of students: ";
    cin >> n;
     
    for(i=0;i< n; i++){
        cout << "\nEnter details of student " << i+1 << ":\n";
        std[i].getDetails();
    }
     
    cout << endl;
     
    for(i=0;i< n; i++){
        cout << "\nDetails of student " << (i+1) << ":\n";
        std[i].putDetails();
    }
    
    cout<<"\n";
     
    return 0;
}



