#include <bits/stdc++.h>

using namespace std;

void testCase()
{
	string str1;
	getline(cin, str1);
	string str2;
	getline(cin, str2);
	stringstream ss1(str1);
	string s1, s2;
	set<string> s;
	while (ss1 >> s1)
	{
		s.insert(s1);
	}
	stringstream ss2(str2);
	set<string> v;
	while (ss2 >> s2)
	{
		v.insert(s2);
	}
	for (auto x : s)
	{
		if (v.find(x) == v.end())
		{
			cout << x << " ";
		}
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		testCase();
	}
}
