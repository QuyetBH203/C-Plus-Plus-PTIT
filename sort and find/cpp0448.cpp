#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> mp;
        for (int x : arr)
        {
            mp[x]++;
        }
        auto it = mp.find(x);
        if (it == mp.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (*it).second << endl;
        }
    }
    return 0;
}