#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
    long long  tu, mau;
};
void rutgon(PhanSo &A)
{
    long long  g = __gcd(A.tu, A.mau);
     A.tu /= g;
     A.mau /= g;
}
void process(PhanSo A, PhanSo B)
{
    long long  g = __gcd(A.mau, B.mau);
    long long  l = (A.mau * B.mau) / g;
    PhanSo C;
    PhanSo D;
    C.mau = l * l;
    C.tu = ((l / A.mau) * A.tu + (l / B.mau) * B.tu) * ((l / A.mau) * A.tu + (l / B.mau) * B.tu);
    rutgon(C);
    D.tu = A.tu * B.tu * C.tu;
    D.mau = A.mau * B.mau * C.mau;
    rutgon(D);
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}