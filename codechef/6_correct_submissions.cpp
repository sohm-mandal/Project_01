#include <iostream>
using namespace std;

void sort(int arr[])
{
    int n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp;
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int m, n, a, b, c, i, j;
    int arr[100];
    cin >> n;
    string arr1[100];

    for (int i = 0; i < n; i++)
    {
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
            cin >> arr[i];
        }
    }

    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    return 0;
}