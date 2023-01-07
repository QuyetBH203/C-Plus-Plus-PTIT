#include<bits/stdc++.h>

using namespace std;

class NhanVien{
    public:
    string mnv="00001";
    string ten,gender,dob,address,tax,contract;
    friend istream &operator >> (istream &is,NhanVien &a){
        getline(is,a.ten);
        
        is >> a.gender >> a.dob;
        is.ignore();
        getline(is,a.address);
        is >> a.tax >> a.contract;
        return is;

    }
    friend ostream &operator << (ostream &os,NhanVien a){
        os << a.mnv << " " << a.ten << " " << a.gender << " " << a.dob << " "
           << a.address << " " << a.tax << " " << a.contract;
        return os;   
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}