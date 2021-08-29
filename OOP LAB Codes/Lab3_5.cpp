

#include<iostream>
using namespace std;

int ref_sum(int &a, int &b){
    int sum;
    sum = a + b;
    return sum;
}
int main(){
    int a,b,sum;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    sum = ref_sum(a, b);   
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}
