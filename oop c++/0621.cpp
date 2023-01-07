#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
public:
    string msv, ten, lop, email;

    friend istream &operator>>(istream &is, SinhVien &a)
    {
        scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.email);

        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien a)
    {
        cout << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;

        return os;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.msv < b.msv;
}

void sapxep(SinhVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}

int main()
{
    SinhVien ds[1001], x;
    int n = 0;
    while (cin >> x)
    {
        ds[n++] = x;
    }
    sapxep(ds, n);
    for (int i = 0; i < n; i++)
    {
        cout << ds[i];
    }

    return 0;
}