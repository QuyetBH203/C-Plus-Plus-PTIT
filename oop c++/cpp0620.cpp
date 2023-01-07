#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    public:
    string msv,name,lop,email;

    friend istream &operator >> (istream& is,SinhVien &a){
        is.ignore();
        is >> a.msv;
        getline(is,a.name);
        is.ignore();
        is >> a.lop >> a.email;

        return is;
    }
    friend ostream &operator << (ostream& os,SinhVien &a){
        os << a.msv << " " << a.name << " " << a.lop << " " << a.email << endl;

        return os;
    }
};

bool cmp(SinhVien a,SinhVien b){
    return a.lop < b.lop;
}

void sapxep(SinhVien ds[],int N){
    sort(ds,ds+N,cmp);
}


int main(){

    SinhVien ds[1000];
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(int i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;

}