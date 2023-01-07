#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] + x > a[n - 1])
        {
            break;
        }
        if (binary_search(a, a + n, a[i] + x))
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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