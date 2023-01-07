#include <bits/stdc++.h>

using namespace std;
int id = 1;
class NhanVien
{
public:
    string mnv, ten, gender, dob, address, tax, contract;

    friend istream &operator>>(istream &is, NhanVien &a)
    {

        string s = to_string(id++);
        while (s.length() < 5)
        {
            s = '0' + s;
        }
        a.mnv = s;
        is.ignore();
        getline(is, a.ten);
        is >> a.gender >> a.dob;
        is.ignore();
        getline(is, a.address);
        is >> a.tax >> a.contract;
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien a)
    {
        os << a.mnv << " " << a.ten << " " << a.gender << " "
           << a.dob << " " << a.address << " " << a.tax << " " << a.contract << endl;
        return os;
    }
};

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }

    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }

    return 0;
}