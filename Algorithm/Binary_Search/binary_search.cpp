#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = high - low / 2;

        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 44;

    int result = binary_search(arr, size, target);

    if (result != -1)
    {
        cout << "Found at index:" << result;
    }
    else
        cout << "Number not found" << endl;

    return 0;
}