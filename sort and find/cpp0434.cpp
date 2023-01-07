#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
    {
        cin >> x;
    }
    vector<long long> v;
    v.push_back(a[0] * a[1]);

    for (int i = 1; i < n - 1; i++)
    {
        v.push_back(a[i - 1] * a[i + 1]);
    }
    v.push_back(a[n - 1] * a[n - 2]);

    for (auto x : v)
    {
        cout << x << " ";
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