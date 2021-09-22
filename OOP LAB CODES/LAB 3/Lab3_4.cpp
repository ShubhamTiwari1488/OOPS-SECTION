

#include<iostream>
using namespace std;

int ref_sum(int &a, int &b){
    int sum;
    sum = a + b;
    return sum;
}

int call_add(int *a, int *b){
    int sum;
    sum = *a + *b;
    return sum;
}


int call_value(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int main(){
    int a,b,sum;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Call by reference is "<<ref_sum(a, b)<<endl;    
    cout<<"Call by address is "<<call_add(&a, &b)<<endl;
    cout<<"Call by value is "<<call_value(a, b)<<endl;
return 0;
}

