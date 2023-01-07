#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string msv, name, lop;
    int d, m, y;
    float gpa;
};

string Chuanhoa(int i)
{
    string s = to_string(i);
    while (s.length() < 3)
    {
        s = '0' + s;
    }
    return "B20DCCN" + s;
}
void ChuanhoaTen(string &str)
{
    string s, res = "";
    stringstream ss(str);
    while (ss >> s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        res += s + ' ';
    }
    res.pop_back();
    str = res;
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}
void nhap(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("\n");
        ds[i].msv = Chuanhoa(i + 1);
        getline(cin, ds[i].name);
        ChuanhoaTen(ds[i].name);
        getline(cin, ds[i].lop);
        scanf("%d/%d/%d %f", &ds[i].d, &ds[i].m, &ds[i].y, &ds[i].gpa);
    }
}
void sapxep(SinhVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}
void in(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].lop;
        printf(" %.2d/%.2d/%.4d/ %.2f", ds[i].d, ds[i].m, ds[i].y, ds[i].gpa);
        cout << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}