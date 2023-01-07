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

int main()
{
    SinhVien ds[1001];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int k;
        cin >> k;
        cout << "DANH SACH SINH VIEN KHOA " << k << ":" << endl;
        for (int i = 0; i < N; i++)
        {
            if (stoi(ds[i].msv.substr(1, 2)) + 2000 == k)
            {
                cout << ds[i];
            }
        }
    }
    return 0;
}