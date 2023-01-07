#include <bits/stdc++.h>

using namespace std;

struct NhanVien
{
    string staff, name, gender, date, adress, code, contract;
};
void nhap(NhanVien &a)
{
    a.staff = "00001";
    getline(cin, a.name);
    cin >> a.gender >> a.date;
    cin.ignore();
    getline(cin, a.adress);

    cin >> a.code >> a.contract;
}
void in(NhanVien a)
{
    cout << a.staff << " " << a.name << " " << a.gender << " " << a.date << " "
         << a.adress << " " << a.code << " " << a.contract;
}

int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}