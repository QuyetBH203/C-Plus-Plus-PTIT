#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string msv, name, lop;
    float mark1, mark2, mark3;
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.name < b.name;
}
void nhap(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {

        scanf("\n");
        getline(cin, ds[i].msv);
        getline(cin, ds[i].name);
        getline(cin, ds[i].lop);
        scanf("%f %f %f", &ds[i].mark1, &ds[i].mark2, &ds[i].mark3);
    }
}
void sapxep(SinhVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}

void ind(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].lop;
        printf(" %.1f %.1f %.1f", ds[i].mark1, ds[i].mark2, ds[i].mark3);
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
    ind(ds, N);
    return 0;
}