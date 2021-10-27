
#include<iostream>  
#include<cstring>
using namespace std;  
  
class String  
{  
    char str[20];  
public:  
    void input() 
    {  
        cout<<"Enter your string: ";  
        cin.getline(str,20);  
    } 
     
    void display() 
    {  
        cout<<"String: "<<str;  
    } 
     
    String operator+(String s) 
    {  
        String obj;  
        strcat(str,s.str);  
        strcpy(obj.str,str);  
        return obj;  
    }  
};  

int main()  
{  
    String str1,str2,str3; 
    str1.input();  
    str2.input();  
    
    str3=str1+str2;  
    
    str3.display(); 
    
    cout<<endl;
    
    return 0;
}   
