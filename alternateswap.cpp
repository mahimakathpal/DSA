#include <iostream>
using namespace std;
int alternate(int arr[], int size)
{
    int a = 0;
    int b = 1;
    while (b <= size - 1)
    {
        swap(arr[a], arr[b]);
        a = a + 2;
        b = b + 2;
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 8, 0, 2, 6, 7};
    int brr[7] = {2, 3, 5, 6, 9, 0, 1};
    alternate(arr, 6);
    printarray(arr, 6);
    cout << endl;
    alternate(brr, 7);
    printarray(brr, 7);
    return 0;
}