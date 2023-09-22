#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
            }
            return -1;
}
int main()
{
        int arr[6]={2,5,8,9,11,24};
        int brr[7] = {3,6,8,19,27,54,61};
        cout<<binarysearch(arr , 6,24)<<endl;
         cout<<binarysearch(arr , 6,27)<<endl;
          cout<<binarysearch(brr , 6,19)<<endl;
           cout<<binarysearch(arr , 6,15)<<endl;
    return 0;
}