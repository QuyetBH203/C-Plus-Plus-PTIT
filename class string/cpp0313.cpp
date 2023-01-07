#include<bits/stdc++.h>

using namespace std;

int main(){
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	s1.erase(s1.find(s2),s2.length()+1);
	cout << s1 << endl;
}
