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
    int N, t;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    sort(ds, ds + N, cmp);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
        for (int i = 0; i < N; i++)
        {
            if ((ds[i].sv > a || ds[i].sv == a) && (ds[i].sv < b || ds[i].sv == b))
            {
                cout << ds[i] << endl;
            }
        }
        cout << endl;
    }
    return 0;
}