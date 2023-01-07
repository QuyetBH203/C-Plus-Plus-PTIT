#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int a[10000], b[10000];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    sort(a, a + n);
    sort(b, b + m);
    long long c = 1ll * a[n - 1] * b[0];
    cout << c << endl;
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