#include<bits/stdc++.h>

using namespace std;


void countWord(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string word;
	int count=0;
	while(ss>>word){
		count++;
	}
	cout << count << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		countWord();
	}
	return 0;
	
}
