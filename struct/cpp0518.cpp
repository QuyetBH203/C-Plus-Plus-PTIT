#include <bits/stdc++.h>

using namespace std;

int stt = 1;
struct NhanVien
{
    string id, name, gender;
    int d, m, y;
    string address, tax, contract;
};
string chuanHoa(int i)
{
    string s = to_string(i);
    while (s.length() < 5)
    {
        s = '0' + s;
    }
    return s;
}
bool cmp(NhanVien a, NhanVien b)
{
    if (a.y < b.y)
        return 1;
    if (a.y == b.y)
    {
        if (a.m < a.m)
            return 1;
        if (a.m == b.m)
        {
            if (a.d < b.d)
                return 1;
        }
    }
    return 0;
}
void nhap(NhanVien &a)
{
    a.id = chuanHoa(stt);
    stt++;
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.gender);
    scanf("%d/%d/%d\n", &a.m, &a.d, &a.y);
    
    getline(cin, a.address);
    getline(cin, a.tax);
    getline(cin, a.contract);
}
void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}
void inds(NhanVien ds[],int N)
{
    for(int i=0;i<N;i++){
    cout << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " ";
    printf("%.2d/%.2d/%.4d ", ds[i].m, ds[i].d, ds[i].y);
    cout << ds[i].address << " " << ds[i].tax << " " << ds[i].contract << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        nhap(ds[i]);
    }
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}