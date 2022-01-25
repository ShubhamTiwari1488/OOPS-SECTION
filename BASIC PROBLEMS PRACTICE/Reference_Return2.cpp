

#include<iostream>
using namespace std;

int &give(int &num)
{
    return num;
}

int main()
{
    int num=32;
    
    int &val=give(num);
    
    cout<<"val= "<<val<<endl;
    cout<<"Address of val and num is "<<&val<<" "<<&num<<endl;   //WILL FIND THE ADDRESS OF BOTH TO BE SAME AS VAL IS AN ALIAS OF NUM
    
    return 0;
}
