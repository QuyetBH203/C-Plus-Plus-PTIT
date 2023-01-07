#include<bits/stdc++.h>

using namespace std;


struct SinhVien{
    string msv,name,classs,date;
    float gpa;

};

void nhapThongTinSV(SinhVien &a){
    a.msv="N20DCCN001";
    getline(cin,a.name);
    cin >> a.classs >> a.date ;
    cin >> a.gpa;

    //chuan hoa ngay sinh
    if(a.date.length()==8){
        a.date='0'+a.date.substr(0,2)+'0'+a.date.substr(2);
    }else if(a.date.length()==9){
        if(a.date[1]=='/'){
            a.date='0'+a.date;
        }else{
            a.date=a.date.substr(0,3)+'0'+a.date.substr(3);
        }

    }
}

void inThongTinSV(SinhVien a){
    cout << a.msv << " " << a.name << " " << a.classs << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
   struct SinhVien a;
   nhapThongTinSV(a);
   inThongTinSV(a);
   return 0;
   

}