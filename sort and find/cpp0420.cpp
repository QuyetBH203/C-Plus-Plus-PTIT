#include <bits/stdc++.h>

using namespace std;

int n, k;
bool cmp(int a, int b)
{
    return abs(k - a) < abs(k - b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        for (auto &t : a)
        {
            cin >> t;
        }
        stable_sort(a, a + n, cmp);
        for (auto t : a)
        {
            cout << t << " ";
        }
        cout << endl;
    }
}