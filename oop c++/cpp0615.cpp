#include <bits/stdc++.h>

using namespace std;

int id = 1;
class NhanVien
{
public:
    string mnv, ten, gender, address, tax, contract;
    int d, m, y;

    friend istream &operator>>(istream &is, NhanVien &a)
    {
        scanf("\n");
        getline(cin, a.ten);
        getline(cin, a.gender);
        scanf("%d/%d/%d\n", &a.m, &a.d, &a.y);

        getline(cin, a.address);
        getline(cin, a.tax);
        getline(cin, a.contract);

        // ma nhan vien

        string s = to_string(id++);
        while (s.length() < 5)
        {
            s = "0" + s;
        }
        a.mnv = s;

        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien a)
    {
        cout << a.mnv << " " << a.ten << " " << a.gender;
        printf(" %.2d/%.2d/%.4d ", a.m, a.d, a.y);
        cout << a.address << " " << a.tax << " " << a.contract << endl;

        return os;
    }
};

bool cmp(NhanVien a, NhanVien b)
{
    if (a.y < b.y)
        return 1;
    else if (a.y == b.y)
    {
        if (a.m < b.m)
            return 1;
        else if (a.m == b.m)
        {
            if (a.d < b.d)
                return 1;
        }
    }
    return 0;
}

void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}