#include <bits/stdc++.h>

using namespace std;

class Doanhnghiep
{
public:
    string code, name;
    int sv;

    friend istream &operator>>(istream &is, Doanhnghiep &a)
    {
        scanf("\n");

        getline(cin, a.code);
        getline(cin, a.name);
        cin >> a.sv;
        return is;
    }
    friend ostream &operator<<(ostream &os, Doanhnghiep a)
    {
        cout << a.code << " " << a.name << " " << a.sv;
        return os;
    }
};
bool cmp(Doanhnghiep a, Doanhnghiep b)
{
    if (a.sv > b.sv)
        return 1;
    else if (a.sv == b.sv)
    {
        if (a.code < b.code)
            return 1;
    }
    return 0;
}
int main()
{
    Doanhnghiep ds[500];
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    sort(ds, ds + N, cmp);
    for (int i = 0; i < N; i++)
    {
        cout << ds[i] << endl;
    }
    return 0;
}