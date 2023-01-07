#include<bits/stdc++.h>

using namespace std;

bool check1(string s){
	for(int i=1;i<5;i++){
		if(s[i]<=s[i-1]){
			return false;
		}
	}
	return true;
}
bool check2(string s){
	return (s[0]==s[1] && s[1]==s[2] && s[3]==s[4]);
}
bool check3(string s){
	for(int i=1;i<5;i++){
		if(s[i]>s[i-1] || s[i]<s[i-1]){
			return false;
		}
	}
	return true;
}
bool check4(string s){
	for(int i=0;i<5;i++){
		if(s[i] != '6' && s[i] != '8'){
			return false;
		}
	}
	return true;
}
void testCase(){
	string s;
	cin >> s;
	s.erase(0,5);
	s.erase(3,1);
	if(check1(s) || check2(s) || check3(s) || check4(s)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
	
		testCase();
	}
	return 0;
}
