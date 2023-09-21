#include<iostream>
using namespace std;
int arraysum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i <size;i++){
        sum = sum+arr[i];
    }
    return sum;
}
int main()
{
    cout<<"enter number of elements"<<endl;
    int n , arr[100];
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }   
    cout<<"sum is "<<arraysum(arr,n);
    return 0;
}