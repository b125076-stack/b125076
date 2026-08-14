#include <iostream>
using namespace std;

void accept(int *arr, int n)
{
    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int sum(int *arr, int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}

int smallest(int *arr, int n)
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}


int largest(int *arr, int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

void display(int *arr, int n)
{
    cout << "\nArray elements: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

   
    accept(arr, n);

    display(arr, n);

    cout << "Sum = " << sum(arr, n) << endl;
    cout << "Smallest element = " << smallest(arr, n) << endl;
    cout << "Largest element = " << largest(arr, n) << endl;

    delete[] arr;

    return 0;
}