#include<bits/stdc++.h>

using namespace std;

void countNumber(int m,int n,int a,int b){
	int cnt=0;
	for(int i=m;i<=n;i++){
		if(i%a==0 || i%b==0){
			cnt++;
		}
	}
	cout << cnt ;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n,a,b;
		cin >> m >> n >> a >> b;
		countNumber(m,n,a,b);
		cout << endl;
	}
	return 0;
}
