// cpp0423
#include<bits/stdc++.h>

using namespace std;
void testCase(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int d=0;
	for(int i=0;i<n;i++){
		if(arr[i]<=k) d++;
	}
	int cnt=0;
	for(int i=0;i<d;i++){
		if(arr[i]<=k) cnt++;
	}
	int ans=cnt;
	for(int i=d;i<n;i++){
		if(arr[i-d]<=k)--cnt;
		if(arr[i]<=k) cnt++;
		ans=max(ans,cnt);
	}
	cout << d-ans << endl;
	
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
}
