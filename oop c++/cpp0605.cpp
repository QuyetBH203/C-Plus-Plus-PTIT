#include<bits/stdc++.h>

using namespace std;

class PhanSo {
    private:
    long long tu,mau;
    public:
    PhanSo(long long t,long long m){
        tu=t;
        mau=m;
    }
    void rutgon(){
        long long uc=__gcd(tu,mau);
        tu/=uc;
        mau/=uc;
    }
    friend istream &operator >> (istream &in,PhanSo &a){
        in >> a.tu >> a.mau;
        return in;
    }
    friend ostream &operator << (ostream &out,PhanSo a){
        out << a.tu << "/" << a.mau;
        return out;
    }
   
};

int main(){
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;

}