#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n, k;
    cin >> n >> k;
    int arr[n * k];
    for (int i = 0; i < n * k; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n * k);
    for (int i = 0; i < n * k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        testCase();
    }
}
