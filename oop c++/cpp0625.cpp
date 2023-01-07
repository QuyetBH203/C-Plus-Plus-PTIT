#include <bits/stdc++.h>

using namespace std;
int id = 1;

class giangvien
{

public:
	string mgv, ten, subject, name;
	friend istream &operator>>(istream &is, giangvien &a)
	{
		
		getline(cin, a.ten);
		getline(cin, a.subject);

		string s = to_string(id++);
		while (s.length() < 2)
		{
			s = '0' + s;
		}
		a.mgv = "GV" + s;
		if (a.subject == "Cong nghe phan mem")
			a.subject = "CNPM";
		else if (a.subject == "Khoa hoc may tinh")
			a.subject = "KHMT";
		else if (a.subject == "An toan thong tin")
			a.subject = "ATTT";
		stringstream ss(a.ten);
		string s1;
		while (ss >> s1)
		{
			a.name = s1;
		}

		return is;
	}
	friend ostream &operator<<(ostream &os, giangvien a)
	{

		cout << a.mgv << " " << a.ten << " " << a.subject << endl;

		return os;
	}
};

bool cmp(giangvien a, giangvien b)
{
	if (a.name == b.name)
		return a.mgv < b.mgv;
	return a.name < b.name;
}

int main()
{
	giangvien ds[100];
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++)
	{
		cin >> ds[i];
	}
	sort(ds, ds+N,cmp);
	for (int i = 0; i < N; i++)
	{
		cout << ds[i];
	}

	return 0;
}
