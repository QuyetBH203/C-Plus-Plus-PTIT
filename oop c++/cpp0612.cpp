#include <bits/stdc++.h>

using namespace std;
int id = 1;
class SinhVien
{

public:
    string msv, ten, lop, dob;
    float gpa;

    friend istream &operator>>(istream &is, SinhVien &a)
    {
        is.ignore();
        getline(is, a.ten);
        is >> a.lop >> a.dob;
        is >> a.gpa;
        // chuan hoa ngay sinh
        if (a.dob[2] != '/')
            a.dob.insert(0, "0");
        if (a.dob[5] != '/')
            a.dob.insert(3, "0");
        // chuan hoa ho ten
        string r = "", word;
        stringstream ss(a.ten);
        while (ss >> word)
        {
            for (int i = 0; i < word.length(); i++)
            {
                word[i] = tolower(word[i]);
            }
            word[0] = toupper(word[0]);
            r = r + word + " ";
        }
        r.pop_back();
        a.ten = r;

        string s = to_string(id++);
        while (s.length() < 3)
        {
            s = '0' + s;
        }
        a.msv = "B20DCCN" + s;

        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien a)
    {
        os << a.msv << " " << a.ten << " " << a.lop << " "
           << a.dob << " " << fixed << setprecision(2) << a.gpa << endl;

        return os;
    }
};

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }

    return 0;
}