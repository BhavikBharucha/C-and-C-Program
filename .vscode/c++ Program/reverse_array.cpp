#include <iostream>
using namespace std;

int main()
{

    int size, remindar = 0;

    cout << "Enter array size: ";
    cin >> size;

    int arr[size] = {};
    int temp;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value at [" << i << "]: ";
        cin >> arr[i];
    }

    // Display
    cout << "Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    //Reverse logic
    for(int i=0;i<size/2;i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    cout << "\nReverse Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}