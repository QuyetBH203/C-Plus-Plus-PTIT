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
        int arr[n];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        int min = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == min)
            {
                min++;
            }
        }
        cout << min << endl;
    }
    return 0;
}