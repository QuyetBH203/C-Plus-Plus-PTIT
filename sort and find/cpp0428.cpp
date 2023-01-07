#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[n + m];
    vector<int> v;
    for (int &x : a)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int &y : b)
    {
        cin >> y;
        v.push_back(y);
    }
    int l = v.size();
    for (int i = 0; i < l; i++)
    {
        c[i] = v[i];
    }
    sort(c, c + n + m);
    for (int t : c)
    {
        cout << t << " ";
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