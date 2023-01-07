#include<iostream>
#include<cmath>



using namespace std;
int arr[10000];
long long e = 1000000007;


int main() {
	int t;
	cin >> t;
	while (t--) {
		
		int n, x;
		cin >> n >> x;
		for (int i = 1; i <=n; i++) {
			cin >> arr[i];
		}
		reverse(arr, arr + n);
		for (int i = 1; i <= n; i++) {
			cout << arr[i] << " ";
		}

	}
	return 0;
}