#include <bits/stdc++.h>

using namespace std;
struct thoigian
{
    int gio, phut, giay;
};
bool cmp(thoigian a, thoigian b)
{
    if (a.gio < b.gio)
        return 1;
    if (a.gio == b.gio)
    {
        if (a.phut < b.phut)
            return 1;
        if (a.phut == b.phut)
        {
            if (a.giay < b.giay)
                return 1;
        }
    }
    return 0;
}
void nhap(thoigian ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> ds[i].gio >> ds[i].phut >> ds[i].giay;
    }
}
void sapxep(thoigian ds[], int n)
{
    sort(ds, ds + n, cmp);
}
void inds(thoigian ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].gio << " " << ds[i].phut << " " << ds[i].giay;
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    thoigian ds[5001];
    nhap(ds, n);
    sapxep(ds, n);
    inds(ds, n);
}