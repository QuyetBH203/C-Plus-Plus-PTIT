#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string msv, name, lop, email, company;
    int stt;

    void input()
    {
        getline(cin, msv);
        getline(cin, name);
        getline(cin, lop);
        getline(cin, email);
        getline(cin, company);
    }
    void inds()
    {
        cout << stt << " " << msv << " " << name << " " << lop << " "
             << email << " " << company << endl;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.name < b.name;
}
void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

void testCase(SinhVien ds[], int n)
{
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].company == s)
        {
            ds[i].inds();
        }
    }
}

int main()
{
    SinhVien ds[500];
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        ds[i].stt = i + 1;
        ds[i].input();
    }
    sapxep(ds, n);
    int q;
    cin >> q;
    while (q--)
    {
        testCase(ds, n);
    }
    return 0;
}