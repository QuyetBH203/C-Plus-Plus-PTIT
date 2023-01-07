#include<bits/stdc++.h>

using namespace std;

void testCase(){
	int n;
	cin >> n;
	int a[n];
	for(auto &x: a) cin >> x;
	sort(a,a+n);
	int d=a[n-1]-a[0];
	vector<int> v;
	for(int i=1;i*i<=d;i++){
		if(d%i==0){
			v.push_back(i);
			if(i !=d/i){
				v.push_back(d/i);
			}
		}
	}
	int res=0;
	for(int i=0;i<v.size();i++){
		int tmp=a[0]%v[i];
		int j;
		for(j=1;j<n;j++){
			if(a[j]%v[i] != tmp){
				break;
			}
		}
		if(j==n) res++;
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
} 
