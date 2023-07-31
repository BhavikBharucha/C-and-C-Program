#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main()
{
    int size;

    cout << "Enter size of the array: ";
    cin >> size;

    int array[size];

    cout << "\nEnter element for array:-\n\n";
    for(int i=0;i<size;i++)
    {
        cout << "Enter element at[" << i << "]: ";
        cin >> array[i];
    }

    cout << "\nBefore sort:-\n\n";
    for(int i=0;i<size;i++)
    {
        cout << array[i] << "|";
    }

    bubbleSort(array,size);

    cout << "\n\nAfter sort:-\n\n";
    for(int i=0;i<size;i++)
    {
        cout << array[i] << "|";
    }
}