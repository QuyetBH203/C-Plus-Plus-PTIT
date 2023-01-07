#include<bits/stdc++.h>
#define SIZE 100000

using namespace std;

void testCase(){
	int arr[SIZE];
	int n;
	cin >> n;
	int t;
	cin >> t;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	cout << arr[t-1] << endl;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		testCase();
	}
	return 0;
}
