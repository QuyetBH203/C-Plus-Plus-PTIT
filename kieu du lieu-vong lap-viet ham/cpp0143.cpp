#include<bits/stdc++.h>

using namespace std;




int main(){
	int t;
	cin >> t;
	while(t--){
		long long f1=1;
		long long f2=1;
		long long fn;
		int n;
		cin >> n;
		if(n<=2){
			cout << 1 << endl;
		}else{
			for(int i=3;i<=n;i++){
				fn=f1+f2;
				f1=f2;
				f2=fn;
			}
			cout << fn << endl;
		}
		
	}
	return 0;
}
