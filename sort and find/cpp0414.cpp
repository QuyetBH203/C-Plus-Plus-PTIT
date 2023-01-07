#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    string arr[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<char> v;
    for (int i = 0; i < n; i++)
    {
        for (auto x : arr[i])
        {
            v.insert(x);
        }
    }
    for (auto t : v)
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