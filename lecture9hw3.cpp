#include<iostream>
using namespace std;
 int arrayreversal(int arr[],int size) {
        int start = 0;
        int end = size-1;
       
            while(start<end){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
    
    void printarray(int arr[],int size){
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main()
{
   int arr[6] = {1,8,0,2,6,7};
   int brr[7] = {2,3,5,6,9,0,1};
   arrayreversal(arr,6);
   printarray(arr,6);
  arrayreversal(brr,7);
   printarray(brr,7);
    return 0;
}