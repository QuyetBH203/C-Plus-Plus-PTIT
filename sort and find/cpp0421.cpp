#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n;
    cin >> n;
    vector<bool> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x < 0 || x > n)
        {
            continue;
        }
        v[x] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i])
        {
            cout << i << " ";
        }
        else
        {
            cout << -1 << " ";
        }
    }
    cout << endl;
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