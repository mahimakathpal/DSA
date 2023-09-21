#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}
int main()
{
    int arr[100], key, n;
    cout << "enter size";
    cin >> n;
    cout << "\n enter the array\n ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element you want to search";
    cin >> key;
    bool found = search(arr, n, key);
    if (found)
    {
        cout << "element found";
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}