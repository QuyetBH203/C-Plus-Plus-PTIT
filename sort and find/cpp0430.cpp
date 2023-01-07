#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int arr[10000];
    int n;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        se.insert(arr[i]);
    }
    sort(arr, arr + n);
    cout << arr[n - 1] - arr[0] + 1 - n + (n - se.size()) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
    }
    return 0;
}