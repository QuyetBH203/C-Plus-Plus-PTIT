#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n, m, x;
    cin >> n >> m;
    int a[n], b[m];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {

        cin >> x;

        mp[x]++;
    }
    for (int i = 0; i < m; i++)
    {

        cin >> x;

        mp[x]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x : mp)
    {
        if (x.second >= 2)
        {
            cout << x.first << " ";
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