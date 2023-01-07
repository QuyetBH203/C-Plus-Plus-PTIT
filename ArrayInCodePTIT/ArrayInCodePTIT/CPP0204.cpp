#include<iostream>
#include<cmath>

using namespace std;

bool checkPrimeNumber(long long n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int cnt = 0;
		int l, r;
		cin >> l >> r;
		for (int i = l; i <= r; i++) {
			if (checkPrimeNumber(i)) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}