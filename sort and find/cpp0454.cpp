#include <bits/stdc++.h>

using namespace std;

int isOK(int a, int b)
{
    long long x = (long long)a * a + (long long)b * b;
    int c = sqrt(x);
    if ((long long)c * c == x)
    {
        return c;
    }
    return 0;
}
void testCase()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
    {
        cin >> x;
    }
    sort(a, a + n);
    for (int i = 0; i + 2 < n; i++)
    {
        for (int j = 0; j + 1 < n; j++)
        {
            int x = isOK(a[i], a[j]);
            if (x != 0 && binary_search(a + j + 1, a + n, x))
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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
