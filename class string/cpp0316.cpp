#include<bits/stdc++.h>

using namespace std;


void solve(int &num){
	int sum=0;
	while(num>0){
		sum+=num%10;
		num/=10;
	}
	num=sum;
}
void testCase(){
	string s;
	cin >> s;
	int num=0;
	for(auto x: s){
		num+=x-'0';
	}
	while(num>=10){
		solve(num);
	}
	cout << (num==9) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
