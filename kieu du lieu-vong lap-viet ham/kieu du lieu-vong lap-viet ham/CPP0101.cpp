#include<iostream>

using namespace std;
void testCase() {
	int n;
	cin >> n;
	long long S = n * (n + 1) / 2;
	cout << S;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		testCase();
	}

	return 0;
}