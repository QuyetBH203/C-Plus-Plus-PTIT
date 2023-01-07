#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int arr[], int left, int right, int x)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            return 1;
        }
        else if (arr[mid] < x)
        {
            return binarySearch(arr, mid + 1, right, x);
        }
        else
        {
            return binarySearch(arr, left, mid - 1, x);
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (binarySearch(arr, 0, n - 1, x))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}