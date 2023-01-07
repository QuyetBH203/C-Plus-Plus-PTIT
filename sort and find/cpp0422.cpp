#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (long long x : a)
        {
            if (x != 0)
            {
                cout << x << " ";
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt++;
            }
        }
        for (int i = 0; i < cnt; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}