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
string solve(string s)
{
    if (s == "Ke toan")
        return "KT";
    if (s == "Cong nghe thong tin")
        return "CN";
    if (s == "An toan thong tin")
        return "AT";
    if (s == "Vien thong")
        return "VT";
    if (s == "Dien tu")
        return "DT";
}
string chuanhoa(string str)
{
    stringstream ss(str);
    string r;
    string m = "";
    while (ss >> r)
    {
        for (int i = 0; i < r.length(); i++)
        {
            r[i] = toupper(r[i]);
        }

        m = m + r + " ";
    }
    m.pop_back();

    return m;
}
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
    cin.ignore();
    while (m--)
    {

        string s;
        getline(cin, s);

        string nganh = solve(s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        if (nganh == "CN" || nganh == "AT")
        {
            for (int i = 0; i < N; i++)
            {
                if (nganh[0] == ds[i].msv[5] && nganh[1] == ds[i].msv[6] && ds[i].lop[0] != 'E')
                {
                    cout << ds[i];
                }
            }
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (nganh[0] == ds[i].msv[5] && nganh[1] == ds[i].msv[6])
                {
                    cout << ds[i];
                }
            }
        }
    }

    return 0;
}