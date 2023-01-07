#include <bits/stdc++.h>

using namespace std;

struct matHang
{
    int code;
    string name, variety;
    float mua, ban;
    float loiNhuan;
};

bool cmp(matHang a, matHang b)
{
    return a.loiNhuan > b.loiNhuan;
}

void nhap(matHang ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("\n");
        ds[i].code = i + 1;
        getline(cin, ds[i].name);
        getline(cin, ds[i].variety);
        cin >> ds[i].mua >> ds[i].ban;
        ds[i].loiNhuan = ds[i].ban - ds[i].mua;
    }
}

void sapxep(matHang ds[], int N)
{
    sort(ds, ds + N, cmp);
}
void in(matHang ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << ds[i].code << " " << ds[i].name << " " << ds[i].variety << " ";
        cout << fixed << setprecision(2) << ds[i].loiNhuan << endl;
    }
}

int main()
{
    struct matHang ds[50];
    int N;
    cin >> N;
    cin.ignore();
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}