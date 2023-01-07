#include<bits/stdc++.h>

using namespace std;

void minOf(int n,int s){
	s--;
	vector<int> mp(n);
	for(int i=n-1;i>0;i--){
		if(s>9){
			mp[i]=9;
			s-=9;
		}else{
			mp[i]=s;
			s=0;
		}
	}
	mp[0]=s+1;
	for(auto x:mp){
		cout << x;
	}
}
void maxOf(int n,int s){
	vector<int> mp(n);
	for(int i=0;i<=n-1;i++){
		if(s>9){
			mp[i]=9;
			s-=9;
		}else{
			mp[i]=s;
			s=0;
		}
	}
	for(auto x:mp){
		cout << x;
	}
}
int main(){
	int m,p;
	cin >> m >> p;
	if(p>m*9 || p==0 && m>1){
		cout << "-1 -1";
	}else{
		minOf(m,p);
		cout << " ";
		maxOf(m,p);
	}
	return 0;
}
