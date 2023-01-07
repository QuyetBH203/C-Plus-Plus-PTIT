#include<bits/stdc++.h>

using namespace std;

bool check(int n){
	int e=0,o=0;
	while(n>0){
		int m=n%10;
		if(m%2==0){
			e++;
		}else{
			o++;
		}
		n/=10;
	} 
	return e==o;
}
int main(){
	int n;
	cin >> n;
	int a=pow(10,n)-1;
	int b=pow(10,n-1);
	int cnt=0;
	for(int i=b;i<=a;i++){
		if(check(i)){
			cout << i << " ";
			cnt++;
			if(cnt==10){
				cout << endl;
				cnt%=10;
			}
		}
		
	}
	return 0;
}
