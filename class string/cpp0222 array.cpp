#include<bits/stdc++.h>

using namespace std;

void testCase(){
	int n;
	cin >> n;
	vector<int> v(1e5+1,0);
	for(int i=0;i<n;i++){
		set<int> s;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			s.insert(x);
		}
		vector<int> t(s.begin(),s.end());
		for(auto x: t){
			v[x]++;
		}
	}
	int d=0;
	for(auto x: v){
		if(x==n){
			d++;
		}
	}
	cout << d << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
}
