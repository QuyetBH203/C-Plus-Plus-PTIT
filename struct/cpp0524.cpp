#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string msv, name, lop;
    float mark1, mark2, mark3;
};
bool cmp(SinhVien a, SinhVien b)
{
    return a.msv < b.msv;
}
void nhap(SinhVien &a)
{
    scanf("\n");
    getline(cin, a.msv);
    getline(cin, a.name);
    getline(cin, a.lop);
    scanf(" %f %f %f ", &a.mark1, &a.mark2, &a.mark3);
}
void sap_xep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
void in_ds(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].lop;
        printf(" %.1f %.1f %.1f", ds[i].mark1, ds[i].mark2, ds[i].mark3);
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    struct SinhVien ds[50];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}