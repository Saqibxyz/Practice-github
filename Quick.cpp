#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp; 
}
int partition(int arr[], int low, int high)
{
    int pi = arr[high];
    int beg = low - 1;
    for (int right = low; right <= high; right++)
    {
        if (arr[right] < pi)
        {
            beg++;
            swap(arr[beg], arr[right]);
        }
    }
    swap(arr[beg + 1], arr[high]);
    return beg + 1;
}
void Quick(int arr[], int low, int high)
{
    if (low < high)
    {
        int part = partition(arr, low, high);
        Quick(arr, low, part - 1);
        Quick(arr, part + 1, high);
    }
}
int main()
{
    int arr[] = {1, 5, 2, 6, 8, 3, 9};
    Quick(arr, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}
