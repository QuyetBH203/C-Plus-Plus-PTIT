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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        set<int> s;
        int u = 0;
        for (int i = 1; i <= n; i++)
        {
            s.insert(arr[i]);
            if (i - s.size() == 1)
            {
                u = i;
                break;
            }
        }
        if (s.size() == n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << arr[u] << endl;
        }
    }
    return 0;
}