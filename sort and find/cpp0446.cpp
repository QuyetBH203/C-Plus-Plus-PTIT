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
        int arr[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int k = arr[i] + arr[j];
                v.push_back(k);
            }
        }
        int res = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            if (abs(v[i]) < abs(res))
            {
                res = v[i];
            }
        }
        cout << res << endl;
    }
}