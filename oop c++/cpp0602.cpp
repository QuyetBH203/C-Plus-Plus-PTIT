#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    public:
    string msv="B20DCCN001",ten,lop,dob;
    float gpa;

    friend istream &operator >> (istream &is,SinhVien &a){
        getline(is,a.ten);
        is >> a.lop >> a.dob >> a.gpa;
        if(a.dob[2] !='/') a.dob.insert(0,"0");
        if(a.dob[5] !='/') a.dob.insert(3,"0");
        return is;
    }

    friend ostream &operator << (ostream &os,SinhVien a){
        os << a.msv << " " << a.ten << " " << a.lop << " " << a.dob << " ";
        cout << fixed << setprecision(2) << a.gpa;
        return os;
    }

};


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}