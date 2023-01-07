#include<bits/stdc++.h>

using namespace std;

void checkSphenicNumber(int n){
	int cnt1=0,cnt2=0;
	for(int i=2;i<=n;i++){
		if(n%i==0) cnt1++;
		while(n%i==0){
			n/=i;
			cnt2++;
		}
	}
	if(cnt1==cnt2 && cnt1==3){
		cout << "1" << endl;
	}else{
		cout << "0" << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		checkSphenicNumber(n);
	}
	return 0;
}
