#include<bits/stdc++.h>

using namespace std;
int id=1;
class GiangVien{

    public:
    string mgv,ten,majoy;

    friend istream &operator >> (istream &is,GiangVien &a){
        scanf("\n");
        getline(cin,a.ten);
        getline(cin,a.majoy);
        string s=to_string(id++);
        while(s.length()<2){
            s='0'+s;
        }
        a.mgv="GV"+s;
        if(a.majoy=="Cong nghe phan mem") a.majoy="CNPM";
        if(a.majoy=="An toan thong tin") a.majoy="ATTT";
        if(a.majoy=="Khoa hoc may tinh") a.majoy="KHMT";
       

        return is;

    }
    friend ostream &operator << (ostream &os,GiangVien a){
       
        cout << a.mgv << " " << a.ten << " " << a.majoy << endl;
        return os;
    }

};

string chuanhoa(string s){
    if(s=="Cong nghe phan mem") return "CNPM";
    if(s=="An toan thong tin") return "ATTT";
    if(s=="Khoa hoc may tinh") return "KHMT";
}

int main(){
    GiangVien ds[50];
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> ds[i];
    }
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string k;
        getline(cin,k);
        cout << "DANH SACH GIANG VIEN BO MON " << chuanhoa(k) << ":" << endl;
        for(int i=0;i<N;i++){
            if(ds[i].majoy==chuanhoa(k))
            cout << ds[i];
        }
    }
    return 0;

}