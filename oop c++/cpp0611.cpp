#include <bits/stdc++.h>

using namespace std;

int id = 1;

class SinhVien
{
public:
    string msv, ten, lop, dob;
    float gpa;

    friend istream &operator>>(istream &in, SinhVien &a)
    {
        in.ignore();
        getline(in, a.ten);
        in >> a.lop >> a.dob;
        in >> a.gpa;
        // chuan hoa msv
        string s = to_string(id++);
        while (s.length() < 3)
        {
            s = '0' + s;
        }
        a.msv = "B20DCCN" + s;

        // chuan hoa ngay sinh

        if (a.dob[2] != '/')
            a.dob.insert(0, "0");
        if (a.dob[5] != '/')
            a.dob.insert(3, "0");

        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien a)
    {
        out << a.msv << " " << a.ten << " " << a.lop << " " << a.dob << " ";
        out << fixed << setprecision(2) << a.gpa << endl;

        return out;
    }
};

int main()
{
    SinhVien ds[50];
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