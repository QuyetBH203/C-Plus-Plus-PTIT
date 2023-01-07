#include<bits/stdc++.h>

using namespace std;


class SinhVien{
    public:
    string msv,ten,lop;
    int d,m,y;
    float gpa;
    void nhap(){
        msv="B20DCCN001";
        getline(cin,ten);
        getline(cin,lop);
        scanf("%d/%d/%d",&d,&m,&y);
        cin >> gpa;
    }
    void xuat(){
        cout << msv << " " << ten << " " << lop;
        printf(" %.2d/%.2d/%.4d ",d,m,y);
      
        cout << fixed << setprecision(2) << gpa;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}