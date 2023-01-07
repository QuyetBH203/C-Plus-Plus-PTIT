#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char a[19];
		cin >> a;
		int n =strlen(a);
		int cnt=0;
		for(int i=0;i<n-1;i++){
			if(abs(a[i+1]-a[i])==1){
				cnt++;
			}
		}
		if(cnt==n-1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
