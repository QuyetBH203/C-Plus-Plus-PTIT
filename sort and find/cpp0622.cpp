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
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for (int i = 0; i < N; i++)
        {
            if (ds[i].lop == s)
            {
                cout << ds[i];
            }
        }
    }
    return 0;
}