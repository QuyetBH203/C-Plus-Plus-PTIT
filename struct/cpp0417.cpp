#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int r = 0, l = n - 1;
    while (a[r] == b[r])
    {
        r++;
    }
    while (a[l] == b[l])
    {
        l--;
    }
    cout << r + 1 << " " << l + 1 << endl;
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