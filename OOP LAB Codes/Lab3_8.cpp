

#include<iostream>
using namespace std;

int ret_max(int arr[], int n)
{
    int i;
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int n, max;
    cout<<"Enter no of elements in array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int arr[20];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    max = ret_max(arr, n);
    cout<<"largest element is: "<<max<<endl;
return 0;
}

