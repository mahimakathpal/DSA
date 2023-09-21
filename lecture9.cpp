#include<iostream>
using namespace std;
int getmin(int num[],int n){
    int mini = INT16_MAX; 
    for(int i = 0; i<n;i++){
        mini = min(mini , num[i]);
    }
    return mini;
}
int getmax(int num[],int n){
    int maxi =INT16_MIN;
    for(int i = 0; i<n;i++){
       maxi = max(maxi , num[i]);
    }
    return maxi;
}
int main()
{
    int size ;
    cout<<"enter size";
    cin>>size;
    int arr[100];
    for(int  i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"maximum value is "<<getmax(arr , size)<<endl;
      cout<<"minimum value is "<<getmin(arr , size)<<endl;
    return 0;
}