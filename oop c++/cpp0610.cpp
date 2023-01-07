#include <bits/stdc++.h>

using namespace std;

class PhanSo
{
private:
    long long tu, mau;

public:
    PhanSo(long long t = 0, long long m = 1)
    {
        tu = t;
        mau = m;
    }
    void rutgon()
    {
        long long uc = __gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }
    friend istream &operator>>(istream &in, PhanSo &a)
    {
        in >> a.tu >> a.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PhanSo a)
    {
        out << a.tu << "/" << a.mau;
        return out;
    }
    PhanSo operator+(PhanSo B)
    {
        PhanSo A;
        A.tu = tu * B.mau + B.tu * mau;
        A.mau = mau * B.mau;
        A.rutgon();
        return A;
    }
};

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}